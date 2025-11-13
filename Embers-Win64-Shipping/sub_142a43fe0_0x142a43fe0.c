// 函数: sub_142a43fe0
// 地址: 0x142a43fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const* const var_f0 = "count  "
char const* const var_f8 = "unit  "
char const* const var_100 = "freed  "
char const* const var_108 = "total  "
sub_142a43410(arg3, "%10s: %10s %10s %10s %10s %10s\n", "heap stats")
sub_142a447d0(&arg1[8], "reserved", 1, arg3)
sub_142a447d0(&arg1[0xc], "committed", 1, arg3)
sub_142a447d0(&arg1[0x10], "reset", 1, arg3)
sub_142a447d0(&arg1[0x14], "touched", 1, arg3)
sub_142a447d0(arg1, "segments", -1, arg3)
sub_142a447d0(&arg1[0x18], "-abandoned", -1, arg3)
sub_142a447d0(&arg1[0x3c], "-cached", -1, arg3)
sub_142a447d0(&arg1[4], "pages", -1, arg3)
sub_142a447d0(&arg1[0x1c], "-abandoned", -1, arg3)
sub_142a43410(arg3, &data_14370209c, sub_142a43410(arg3, "%10s:", "-extended"))
sub_142a43410(arg3, "%10s:", "-noretire")
int64_t rcx_13 = arg1[0x40]
int64_t rax_1
int64_t rdx
rdx:rax_1 = sx.o(rcx_13)
uint128_t zmm13 = 0x4090000000000000
int64_t zmm7 = 0x41d0000000000000
double zmm8 = 1048576.0
int64_t zmm0 = float.d((rax_1 ^ rdx) - rdx)
char var_e0[0x28]
double zmm3_1

if (zmm13.q f<= zmm0)
    zmm3_1 = float.d(rcx_13)
    char* r8_1
    
    if (not(zmm8 f<= zmm0))
        zmm3_1 = zmm3_1 * 0.0009765625
        r8_1 = "%.1f k%s"
    else if (zmm7 f<= zmm0)
        zmm3_1 = zmm3_1 * 9.3132257461547852e-10
        r8_1 = "%.1f g%s"
    else
        zmm3_1 = zmm3_1 * 9.5367431640625e-07
        r8_1 = "%.1f m%s"
    
    wchar32 const* const var_108_2 = &(*U""\tv 0")[3]
    _fwprintf_l(&var_e0, 0x20, r8_1, zmm3_1)
else
    wchar32 const* const var_108_1 = &(*U""\tv 0")[3]
    _fwprintf_l(&var_e0, 0x20, "%d %s ", zx.q(rcx_13.d))

sub_142a43410(arg3, &data_14370209c, sub_142a43410(arg3, "%11s", &var_e0))
sub_142a43410(arg3, &data_14370209c, sub_142a43410(arg3, "%10s:", "mmaps"))
sub_142a43410(arg3, &data_14370209c, sub_142a43410(arg3, "%10s:", "commits"))
sub_142a43410(arg3, &data_14370209c, sub_142a43410(arg3, "%10s:", "threads"))

if (arg1[0x43] != 0)
    arg1[0x42]

sub_142a43410(arg3, "%10s: %7.1f avg\n", "searches")

if (not(arg2.q f< 0.0))
    sub_142a43410(arg3, "%10s: %9.3f s\n", "elapsed")

FILETIME creationTime
FILETIME userTime
FILETIME kernelTime
void exitTime
GetProcessTimes(GetCurrentProcess(), &creationTime, &exitTime, &kernelTime, &userTime)
int64_t rdi
rdi.d = userTime.dwLowDateTime
rdi:4.d = userTime.dwHighDateTime
int64_t rbx_1
rbx_1.d = kernelTime.dwLowDateTime
rbx_1:4.d = kernelTime.dwHighDateTime
struct PROCESS_MEMORY_COUNTERS ppsmemCounters
K32GetProcessMemoryInfo(GetCurrentProcess(), &ppsmemCounters, 0x48)
double zmm0_1 = float.d(rbx_1)

if (rbx_1 s< 0)
    zmm0_1 = zmm0_1 + 1.8446744073709552e+19

var_f8.d = 0
var_100.d = ppsmemCounters.PageFaultCount
double var_108_4 = zmm0_1 * 9.9999999999999995e-08
sub_142a43410(arg3, "%10s: user: %.3f s, system: %.3f s, faults: %lu, reclaims: %lu, rss: ", 
    "process")
uint64_t PeakWorkingSetSize = ppsmemCounters.PeakWorkingSetSize
int64_t rax_9
int64_t rdx_3
rdx_3:rax_9 = sx.o(PeakWorkingSetSize)
zmm0_1 = float.d((rax_9 ^ rdx_3) - rdx_3)

if (zmm13.q f<= zmm0_1)
    zmm3_1 = float.d(PeakWorkingSetSize)
    char* r8_8
    
    if (not(zmm8 <= zmm0_1))
        zmm3_1 = zmm3_1 * 0.0009765625
        r8_8 = "%.1f k%s"
    else if (zmm7 f<= zmm0_1)
        zmm3_1 = zmm3_1 * 9.3132257461547852e-10
        r8_8 = "%.1f g%s"
    else
        zmm3_1 = zmm3_1 * 9.5367431640625e-07
        r8_8 = "%.1f m%s"
    
    void* const var_108_6 = &data_142d8d918
    _fwprintf_l(&var_e0, 0x20, r8_8, zmm3_1)
else
    void* const var_108_5 = &data_142d8d918
    _fwprintf_l(&var_e0, 0x20, "%d %s ", zx.q(PeakWorkingSetSize.d))

int64_t r8_10 = sub_142a43410(arg3, "%s", &var_e0)
uint64_t PeakPagefileUsage = ppsmemCounters.PeakPagefileUsage

if (PeakPagefileUsage != 0)
    sub_142a43410(arg3, ", commit charge: ", r8_10)
    int64_t rax_13
    int64_t rdx_4
    rdx_4:rax_13 = sx.o(PeakPagefileUsage)
    zmm0_1 = float.d((rax_13 ^ rdx_4) - rdx_4)
    
    if (zmm13.q f<= zmm0_1)
        zmm3_1 = float.d(PeakPagefileUsage)
        char* r8_11
        
        if (not(zmm8 <= zmm0_1))
            zmm3_1 = zmm3_1 * 0.0009765625
            r8_11 = "%.1f k%s"
        else if (zmm7 f<= zmm0_1)
            zmm3_1 = zmm3_1 * 9.3132257461547852e-10
            r8_11 = "%.1f g%s"
        else
            zmm3_1 = zmm3_1 * 9.5367431640625e-07
            r8_11 = "%.1f m%s"
        
        void* const var_108_8 = &data_142d8d918
        _fwprintf_l(&var_e0, 0x20, r8_11, zmm3_1)
    else
        void* const var_108_7 = &data_142d8d918
        _fwprintf_l(&var_e0, 0x20, "%d %s ", zx.q(PeakPagefileUsage.d))
    
    r8_10 = sub_142a43410(arg3, "%s", &var_e0)

return sub_142a43410(arg3, &data_14370209c, r8_10) __tailcall
