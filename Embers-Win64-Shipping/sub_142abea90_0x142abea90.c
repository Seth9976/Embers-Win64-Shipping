// 函数: sub_142abea90
// 地址: 0x142abea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *(arg1 + 0x1a8)
void* rcx = *(arg1 + 0x198)
int16_t rax = *(rcx + 8)
uint64_t result

if (rax s< 0)
    result = zx.q(*(rcx + 0xc))
else
    result = zx.q(sx.d(rax) s>> 5)

int32_t rdx = *(arg1 + 0x1a0)

if (rdx != result.d)
    result = sub_142a486d0(rcx, rdx)
    
    if (result.d == 0x45)
        result = zx.q(*rdi) & 0xffff0000
        
        if (result == 0xffff0000)
            void* rcx_1 = *(arg1 + 0x198)
            int16_t rax_3 = *(rcx_1 + 8)
            int32_t rax_5
            
            if (rax_3 s< 0)
                rax_5 = *(rcx_1 + 0xc)
            else
                rax_5 = sx.d(rax_3) s>> 5
            
            int32_t rdx_1 = *(arg1 + 0x1a0)
            int32_t rax_6
            
            if (rdx_1 != rax_5)
                rax_6 = sub_142a486d0(rcx_1, rdx_1)
            else
                rax_6 = -1
            
            int32_t rcx_2
            rcx_2.b = rax_6 u> 0xffff
            *(arg1 + 0x1a0) += rcx_2 + 1
            rdi[0xb] += 1
            void* rcx_4 = *(arg1 + 0x198)
            int16_t rax_7 = *(rcx_4 + 8)
            int32_t rax_9
            
            if (rax_7 s< 0)
                rax_9 = *(rcx_4 + 0xc)
            else
                rax_9 = sx.d(rax_7) s>> 5
            
            int32_t rdx_2 = *(arg1 + 0x1a0)
            
            if (rdx_2 != rax_9 && sub_142a486d0(rcx_4, rdx_2) == 0x2b)
                sub_142ac0290(arg1 + 0x198)
                rdi[0x20].b = 1
                goto label_142abeb68
            
            while (true)
                void* rcx_6 = *(arg1 + 0x198)
                int16_t rax_11 = *(rcx_6 + 8)
                
                if (rax_11 s< 0)
                    result = zx.q(*(rcx_6 + 0xc))
                else
                    result = zx.q(sx.d(rax_11) s>> 5)
                
                int32_t rdx_3 = *(arg1 + 0x1a0)
                
                if (rdx_3 == result.d)
                    return result
                
                result = sub_142a486d0(rcx_6, rdx_3)
                
                if (result.d != 0x30)
                    return result
                
                void* rcx_7 = *(arg1 + 0x198)
                int16_t rax_13 = *(rcx_7 + 8)
                int32_t rax_15
                
                if (rax_13 s< 0)
                    rax_15 = *(rcx_7 + 0xc)
                else
                    rax_15 = sx.d(rax_13) s>> 5
                
                int32_t rdx_4 = *(arg1 + 0x1a0)
                int32_t rax_16
                
                if (rdx_4 != rax_15)
                    rax_16 = sub_142a486d0(rcx_7, rdx_4)
                else
                    rax_16 = -1
                
                int32_t rcx_8
                rcx_8.b = rax_16 u> 0xffff
                *(arg1 + 0x1a0) += rcx_8 + 1
                rdi[0x21] += 1
            label_142abeb68:
                rdi[0xb] += 1
        else
            *arg2 = 0x10103

return result
