// 函数: sub_1429dc430
// 地址: 0x1429dc430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1ac) = 0xffffffff
bool cond:0 = arg1[0x37].d != 1
*(arg1 + 0x1cc) = 0
*(arg1 + 0x1d4) = 0
arg1[0xa8] = 0
arg1[0xa9].d = 0
*(arg1 + 0x54c) = 1
int32_t rax

if (cond:0)
    rax = 1
else
    rax = arg1[0x1b].d

*(arg1 + 0x1a4) = 0

if (rax s> 8)
    rax = 8

arg1[0x39].d = rax
arg1[0x3b].d = rax
CRITICAL_SECTION* lpCriticalSection = sub_1429dddd0(1, 0xc80)
arg1[0xaa] = lpCriticalSection

if (lpCriticalSection != 0)
    InitializeCriticalSectionEx(lpCriticalSection, 0, 0)
    void* rax_2 = sub_1429dde80(sx.q(arg1[0x39].d) * 0x30)
    arg1[0x38] = rax_2
    
    if (rax_2 != 0)
        int32_t i = 0
        
        if (arg1[0x39].d s> 0)
            int64_t r14_1 = 0
            
            do
                void* rbp_2 = &arg1[0x38][r14_1]
                data_143cc7018(rbp_2)
                int64_t* rax_4 = sub_1429ddec0(0x20, 0x80)
                *(rbp_2 + 0x18) = rax_4
                void* rax_5
                
                if (rax_4 != 0)
                    rax_5 = sub_1429e7920(arg1[0xaa])
                    *rax_4 = rax_5
                
                if (rax_4 == 0 || rax_5 == 0)
                    *arg1 = "Failed to allocate frame_worker_data"
                    return 2
                
                *(rax_5 + 0x4828) = rbp_2
                *(rax_4 + 0x2c) = i
                rax_4[7] = 0
                rax_4[8] = 0
                rax_4[0xf].d = 0
                rax_4[6].d = 0
                InitializeCriticalSectionEx(&rax_4[9], 0, 0)
                InitializeConditionVariable(&rax_4[0xe])
                int32_t rcx_7
                
                if (arg1[0x37].d != 0)
                    rcx_7 = 0
                else
                    rcx_7 = arg1[0x1b].d
                
                *(*rax_4 + 0x4eb8) = rcx_7
                *(*rax_4 + 0x4ebc) = arg1[0x35].d
                *(*rax_4 + 0x4818) = arg1[0x37].d
                *(*rax_4 + 0x13cc) = arg1[0x37].d
                *(rbp_2 + 0x10) = sub_1429dc130
                
                if (data_143cc7020(rbp_2) == 0)
                    *arg1 = "Frame Worker thread creation failed"
                    return 2
                
                i += 1
                r14_1 += 0x30
            while (i s< arg1[0x39].d)
        
        if (*(arg1 + 0xf4) == 0 && (arg1[1].d & 0x10000) != 0)
            arg1[0x1f].d = 3
            *(arg1 + 0xfc) = 4
        
        sub_1429dc300(arg1)
        return 0
    
    *arg1 = "Failed to allocate frame_workers"

return 2
