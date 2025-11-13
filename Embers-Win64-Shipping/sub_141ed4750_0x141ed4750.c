// 函数: sub_141ed4750
// 地址: 0x141ed4750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg1
EnterCriticalSection(&data_143f3a990)
int64_t* rbx_1

if (data_143a2d6f8 == data_143a2d724)
labelid_26:
    rbx_1 = nullptr
else
    void* r8_1 = data_143a2d730
    void* rax_5 = &data_143a2d728
    
    if (r8_1 != 0)
        rax_5 = r8_1
    
    int32_t rax_6 =
        *(rax_5 + ((sx.q((rbx u>> 0x20).d * 0x17 + rbx.d) & (sx.q(data_143a2d738) - 1)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_141ed47db:
        rbx_1 = nullptr
    else
        int64_t r8_2 = data_143a2d6f0
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_6)
            int64_t rcx_2 = rdx_3 * 3
            
            if (*(r8_2 + (rcx_2 << 3)) == rbx)
                break
            
            rax_6 = *(r8_2 + (rcx_2 << 3) + 0x10)
            
            if (rax_6 == 0xffffffff)
                goto label_141ed47db_2
        
        if (rax_6 == 0xffffffff)
        label_141ed47db_1:
            rbx_1 = nullptr
        else
            void* rbx_2 = r8_2 + rdx_3 * 0x18
            
            if (rbx_2 == 0)
            label_141ed47db_2:
                rbx_1 = nullptr
            else
                rbx_1 = *(rbx_2 + 8)

int64_t* result = LeaveCriticalSection(&data_143f3a990)

if (rbx_1 != 0)
    char rdi_1 = arg1[1].b
    rbx_1[0x4b].d -= 1
    
    if (rbx_1[0x4b].d s<= 0)
        *(rbx_1 + 0x8a) &= 0xfe
        result = sub_1405be820(rbx_1)
        int64_t* result_1 = result
        
        if (rdi_1 == 0 && result != 0)
            if (rbx_1[0xcf].d s<= 0)
                result = sub_140967a20(&rbx_1[0xd0])
            
            if (rbx_1[0xcf].d s> 0 || result.b != 0)
                sub_1405a9f90(&rbx_1[0xce], 0)
                int64_t rbp
                rbp.b = 0
                *(rbx_1 + 0x694) += 1
                int32_t rax_7 = rbx_1[0xd1].d
                int32_t rcx_6 = *(rbx_1 + 0x694)
                int64_t rsi_1 = sx.q(rax_7 - 1)
                
                if (rax_7 - 1 s>= 0)
                    int64_t rdi_3 = rsi_1 << 4
                    int64_t temp1_1
                    
                    do
                        int64_t rax_9 = rbx_1[0xd0]
                        
                        if (*(rdi_3 + rax_9 + 8) == 0)
                            rbp.b = 1
                        else
                            int64_t* rcx_7 = *(rdi_3 + rax_9)
                            
                            if (rcx_7 == 0)
                                rbp.b = 1
                            else if ((*(*rcx_7 + 0x50))(rcx_7, rbx_1) == 0)
                                rbp.b = 1
                        
                        rdi_3 -= 0x10
                        temp1_1 = rsi_1
                        rsi_1 -= 1
                    while (temp1_1 - 1 s>= 0)
                    rcx_6 = *(rbx_1 + 0x694)
                
                result = zx.q(rcx_6 - 1)
                *(rbx_1 + 0x694) = result.d
                
                if (rbp.b != 0)
                    result = sub_140599630(&rbx_1[0xd0], 0)
        
        if ((rbx_1[0x42].b & 1) != 0)
            jump(*(*rbx_1 + 0x3a0))
        
        if ((*(rbx_1 + 0x212) & 8) != 0)
            return sub_141eda8f0(rbx_1, 1, result_1)

return result
