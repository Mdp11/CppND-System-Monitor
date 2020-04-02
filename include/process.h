#ifndef PROCESS_H
#define PROCESS_H

#include <string>

class System;

class Process
{
 public:
  Process(const System* system, int pid);
  // Process(const Process&);
  // Process(Process&&);

  // Process& operator=(const Process&);
  // Process& operator=(Process&&);

  int Pid() const;
  std::string User() const;
  std::string Command() const;
  float CpuUtilization() const;
  std::string Ram() const;
  long int UpTime() const;
  bool operator<(const Process& other) const;

 private:
  const System* system_;
  int pid_;
};

#endif