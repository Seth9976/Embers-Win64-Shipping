// 函数: sub_140881cb0
// 地址: 0x140881cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_38 = 0
int32_t var_30 = 0
sub_141f3bc80(arg2, 0, &var_38)
uint64_t rdi = var_38
int64_t r15 = rdi + (sx.q(var_30) << 3)

if (rdi != r15)
    int64_t rsi
    int64_t arg_20 = rsi
    
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            void* rax_1 = sub_14255d0c0()
            void* rdx = rbx_1[2]
            int64_t rax_2 = sx.q(*(rax_1 + 0x38))
            
            if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
                int64_t rbp_1 = rbx_1[0x19]
                int64_t r14_1 = arg1[7]
                rsi.b = (*(*rbx_1 + 0x888))(rbx_1, rdx) == arg1[6]
                void* rax_6 = sub_14086a680()
                void* rdx_1 = rbx_1[2]
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                label_140881d9a:
                    
                    if (rbp_1 == r14_1 && rsi.b != 0 && (*(rbx_1 + 0x8a) & 1) != 0)
                        int64_t rax_10 = *rbx_1
                        
                        if (arg1[0xb].b == 0)
                            (*(rax_10 + 0x270))(rbx_1)
                        else
                            (*(rax_10 + 0x3a0))(rbx_1, 0)
                        
                        break
                else
                    void* rax_9 = rbx_1[0xa5]
                    
                    if (rax_9 != 0 && *(rax_9 + 0x6e8) == 0)
                        goto label_140881d9a
        
        rdi += 8
    while (rdi != r15)

int64_t result = sub_14246c310(arg1, arg2)
uint64_t rcx_6 = var_38

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
