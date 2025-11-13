// 函数: sub_141d11880
// 地址: 0x141d11880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = data_143f36250

if (rsi == 0)
    return 

uint64_t rax = rsi

if (rax == data_143f36250)
    data_143f36250 = 0
else
    rax = data_143f36250

if (rsi != rax)
    return 

int64_t rdi
int64_t var_18_1 = rdi
sub_141d124f0(rsi, 1, 0xffff)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t zmm6_1 = float.d(performanceCount) f* data_143d796f8
int64_t performanceCount_1

do
    EnterCriticalSection(rsi + 8)
    int32_t i = *(rsi + 0xb0)
    int16_t rdx_1 = 0
    
    if (i s> 0)
        do
            rax = 5
            int32_t* rcx_6 = zx.q(rdx_1) * 0x98 + 0x74 + *(rsi + 0xa8)
            
            while (true)
                if (*rcx_6 != 0)
                label_141d11a02:
                    rdi.b = 0
                    goto label_141d119b6
                
                if (rax == 0)
                    break
                
                rax -= 1
                rcx_6 -= 0xc
            
            rdx_1 += 1
        while (zx.d(rdx_1) s< i)
    
    int16_t rdx_2 = 0
    
    if (i s> 0)
        do
            rax = 5
            int32_t* rcx_9 = zx.q(rdx_2) * 0x98 + 0x78 + *(rsi + 0xa8)
            
            while (true)
                if (*rcx_9 != 0)
                    goto label_141d11a02
                
                if (rax == 0)
                    break
                
                rax -= 1
                rcx_9 -= 0xc
            
            rdx_2 += 1
        while (zx.d(rdx_2) s< i)
    
    rdi.b = 1
label_141d119b6:
    
    if (rsi != -8)
        LeaveCriticalSection(rsi + 8)
    
    if (rdi.b != 0)
        void* rdi_1 = data_143f36250
        
        if (rdi_1 != 0)
            DeleteCriticalSection(rdi_1 + 0x298)
            int64_t rcx_13 = *(rdi_1 + 0x268)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            int32_t i_2 = *(rdi_1 + 0x160)
            int64_t* rbx_2 = *(rdi_1 + 0x158)
            
            if (i_2 != 0)
                int32_t i_1
                
                do
                    int64_t rcx_14 = *rbx_2
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    rbx_2 = &rbx_2[2]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                rbx_2 = *(rdi_1 + 0x158)
            
            if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            sub_1405ae080(rdi_1 + 0x108)
            int64_t rcx_17 = *(rdi_1 + 0xf0)
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            int64_t rcx_18 = *(rdi_1 + 0xe0)
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int64_t rcx_19 = *(rdi_1 + 0xc8)
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            int64_t rcx_20 = *(rdi_1 + 0xb8)
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            sub_141cf84d0(rdi_1 + 0xa8)
            sub_1405ae080(rdi_1 + 0x58)
            DeleteCriticalSection(rdi_1 + 8)
            j_sub_140a74f90(rdi_1)
        
        data_143f36250 = 0
        break
    
    sub_140b732d0(0x3a83126f.d)
    QueryPerformanceCounter(&performanceCount_1)
while (float.d(performanceCount_1) f* data_143d796f8 f- zmm6_1 f<= 0x4024000000000000)
