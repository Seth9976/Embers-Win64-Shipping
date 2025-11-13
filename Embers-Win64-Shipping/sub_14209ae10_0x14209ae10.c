// 函数: sub_14209ae10
// 地址: 0x14209ae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t rcx = *(arg1 + 0xc)
int32_t rbx = 0
arg1[1].d = 0

if (rcx s< 0 && rcx != 0)
    sub_1405c5570(arg1, 0)
    rcx = *(arg1 + 0xc)
    rbx = arg1[1].d

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = rbx + rdi.d
arg1[1].d = rax

if (rax s> rcx)
    sub_1405a4d70(arg1)

void* result = memset(*arg1 + (sx.q(rbx) << 3), 0, rdi << 3)

if (arg2[1].d s> 0)
    void** rsi_1 = nullptr
    int64_t r15_1 = 0
    
    do
        int64_t* rbx_2 = *arg2 + r15_1
        int64_t* rcx_5 = *rbx_2
        
        if (rcx_5 != 0)
        label_14209aebe:
            result = (*(*rcx_5 + 0x548))(rcx_5, zx.q(rbx_2[2].d))
            void* result_1 = result
            
            if (result != 0)
                void* rax_3 = sub_142542e20()
                void* rdx_2 = *(result_1 + 0x10)
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    void* result_2 = sub_142121cc0(result_1, arg3)
                    int64_t* rcx_8 = *rbx_2
                    result_1 = result_2
                    
                    if (rcx_8 == 0)
                        int64_t* rcx_9 = rbx_2[1]
                        
                        if (rcx_9 != 0)
                            (*(*rcx_9 + 0x550))(rcx_9, zx.q(rbx_2[2].d), result_1)
                    else
                        int64_t r9_1 = *rcx_8
                        (*(r9_1 + 0x550))(rcx_8, zx.q(rbx_2[2].d), result_2, r9_1)
                
                result = *arg1
                *(rsi_1 + result) = result_1
        else
            rcx_5 = rbx_2[1]
            
            if (rcx_5 != 0)
                goto label_14209aebe
        
        i += 1
        r15_1 += 0x18
        rsi_1 = &rsi_1[1]
    while (i s< arg2[1].d)

return result
