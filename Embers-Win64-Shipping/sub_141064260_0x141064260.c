// 函数: sub_141064260
// 地址: 0x141064260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x17c) = arg5
arg1[0x18] = arg2
arg1[0x19].d = arg3
uint64_t i_1 = zx.q(arg5 + 1)
arg1[0x1a] = arg4
*arg1 = i_1
int64_t rax_1 = 0x18 * i_1

if (mulu.dp.q(0x18, i_1) u>> 0x40 != zx.o(0))
    rax_1 = -1

void* const rax_2 = j_sub_140a82f30(rax_1)

if (rax_2 == 0)
    rax_2 = nullptr
else if (i_1 != 0)
    void* rcx_1 = rax_2 + 0x10
    uint64_t i
    
    do
        *(rcx_1 - 0x10) = 0
        *(rcx_1 - 8) = 0
        *rcx_1 = 0
        rcx_1 += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1] = rax_2

if (rax_2 == 0)
    return 0x8007000e

int64_t frequency
QueryPerformanceFrequency(&frequency)
int32_t zmm0 = float.s(frequency)
int64_t rcx_3 = 0
int32_t zmm1 = zmm0 f* *(arg1 + 0x15c)

if (not(zmm1 f< 9.22337204e+18f))
    zmm1 = zmm1 f- 9.22337204e+18f
    
    if (not(zmm1 f>= 9.22337204e+18f))
        rcx_3 = -0x8000000000000000

zmm0 = zmm0 f* arg1[0x2d].d
int64_t rcx_4 = 0
arg1[0x2c] = int.q(zmm1) + rcx_3

if (not(zmm0 f< 9.22337204e+18f))
    zmm0 = zmm0 f- 9.22337204e+18f
    
    if (not(zmm0 f>= 9.22337204e+18f))
        rcx_4 = -0x8000000000000000

int64_t* rcx_5 = arg1[0x18]
arg1[0x2e] = int.q(zmm0) + rcx_4
enum WIN32_ERROR rax_9 = (*(*rcx_5 + 0x120))(rcx_5, 0, 0, &data_142efcb18, &arg1[0xf])
enum WIN32_ERROR rbx = rax_9

if (rax_9 s>= NO_ERROR)
    HANDLE rax_10 = CreateEventW(nullptr, 0, 0, nullptr)
    arg1[0x16] = rax_10
    
    if (rax_10 == -1)
        enum WIN32_ERROR rax_11 = GetLastError()
        rbx = rax_11
        
        if (rax_11 s> NO_ERROR)
            rbx = zx.d(rax_11.w) | 0x80070000
    
    if (rbx s>= NO_ERROR)
        HANDLE rax_12 = CreateEventW(nullptr, 0, 0, nullptr)
        arg1[0x17] = rax_12
        
        if (rax_12 == -1)
            enum WIN32_ERROR rax_13 = GetLastError()
            rbx = rax_13
            
            if (rax_13 s> NO_ERROR)
                rbx = zx.d(rax_13.w) | 0x80070000
        
        if (rbx s>= NO_ERROR)
            HANDLE rax_14 = CreateEventW(nullptr, 1, 0, nullptr)
            arg1[2] = rax_14
            
            if (rax_14 == -1)
                enum WIN32_ERROR rax_15 = GetLastError()
                rbx = rax_15
                
                if (rax_15 s> NO_ERROR)
                    rbx = zx.d(rax_15.w) | 0x80070000
            
            if (rbx s>= NO_ERROR)
                HANDLE rax_16 = CreateThread(nullptr, 0, sub_14105e7e0, arg1, 
                    THREAD_CREATE_RUN_IMMEDIATELY, nullptr)
                arg1[3] = rax_16
                
                if (rax_16 == -1)
                    enum WIN32_ERROR rax_17 = GetLastError()
                    rbx = rax_17
                    
                    if (rax_17 s> NO_ERROR)
                        rbx = zx.d(rax_17.w) | 0x80070000

return zx.q(rbx)
