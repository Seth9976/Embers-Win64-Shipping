// 函数: sub_1407ee9b0
// 地址: 0x1407ee9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x780)
uint64_t rax

if (rdi != 0)
    void* rdi_1 = *(rdi + 0x28)
    
    if (rdi_1 != 0)
        int32_t* rax_2 = (*(*(rdi_1 + 0x418) + 0x30))(rdi_1 + 0x418)
        char rcx_1
        
        if (rax_2 == 0)
            rax = 0xffffffff
            rcx_1 = 0
        else
            rax = zx.q(*rax_2)
            
            if (rax.d s< 0 || rax.d s>= *(rdi_1 + 0x460))
                rcx_1 = 0
            else
                rcx_1 = 1
        
        if (rcx_1 != 0)
            void* rsi_1 = *(*(rdi_1 + 0x458) + (sx.q(rax.d) << 3))
            
            if (rsi_1 != 0)
                void* rax_3 = sub_142543940()
                void* rdx = *(rsi_1 + 0x10)
                rax = sx.q(*(rax_3 + 0x38))
                
                if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_3 + 0x30)
                    int64_t rdi_2 = sx.q(arg3[1].d)
                    int32_t rax_4 = (rdi_2 + 1).d
                    arg3[1].d = rax_4
                    
                    if (rax_4 s> *(arg3 + 0xc))
                        sub_1405a4d70(arg3)
                    
                    *(*arg3 + (rdi_2 << 3)) = rsi_1
                    int64_t rax_5
                    rax_5.b = 1
                    return rax_5

rax.b = 0
return rax
