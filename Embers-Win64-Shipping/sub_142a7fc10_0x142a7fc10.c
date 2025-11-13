// 函数: sub_142a7fc10
// 地址: 0x142a7fc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14_1 = &arg1[0x3f + sx.q(*(arg1 + 0x1f4)) * 2]
uint64_t rax_2 = zx.q(*(r14_1 + 6))
void* result

if (rax_2.d s< arg1[0x3e].d)
label_142a7fd47:
    uint64_t rcx_4 = zx.q(*(r14_1 + 6)) * 3
    int64_t rax_7 = arg1[0x3d]
    *(rax_7 + (rcx_4 << 3)) = arg3
    void* rdx_2 = rax_7 + (rcx_4 << 3)
    *(rdx_2 + 4) = zx.d(arg2)
    *(rdx_2 + 0x10) = *(r14_1 + 0xc)
    *(rdx_2 + 8) = *r14_1
    *(rdx_2 + 0xc) = 0
    result.b = 1
    *(r14_1 + 6) += 1
else
    void* rdi_1 = *arg1
    uint32_t rsi_2 = (rax_2 * 3).d << 4
    int64_t rcx = *(rdi_1 + 0x48)
    
    if (rcx != 0)
        if (rsi_2 s<= *(rdi_1 + 0x24))
            goto label_142a7fc85
        
        result = sub_142a7dd30(rcx, sx.q(rsi_2))
        
        if (result != 0)
            *(rdi_1 + 0x48) = result
        label_142a7fc82:
            *(rdi_1 + 0x24) = rsi_2
        label_142a7fc85:
            void* rax_3 = &arg1[1]
            
            if (arg1[0x3d] == rax_3)
                int128_t* rcx_2 = *(rdi_1 + 0x48)
                int64_t i_1 = 3
                int64_t i
                
                do
                    rcx_2 = &rcx_2[8]
                    int128_t zmm0 = *rax_3
                    rax_3 += 0x80
                    rcx_2[-8] = zmm0
                    rcx_2[-7] = *(rax_3 - 0x70)
                    rcx_2[-6] = *(rax_3 - 0x60)
                    rcx_2[-5] = *(rax_3 - 0x50)
                    rcx_2[-4] = *(rax_3 - 0x40)
                    rcx_2[-3] = *(rax_3 - 0x30)
                    rcx_2[-2] = *(rax_3 - 0x20)
                    rcx_2[-1] = *(rax_3 - 0x10)
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                *rcx_2 = *rax_3
                rcx_2[1] = *(rax_3 + 0x10)
                rcx_2[2] = *(rax_3 + 0x20)
                rcx_2[3] = *(rax_3 + 0x30)
                rcx_2[4] = *(rax_3 + 0x40)
                rcx_2[5] = *(rax_3 + 0x50)
            
            arg1[0x3d] = *(rdi_1 + 0x48)
            int64_t rax_5
            int64_t rdx
            rdx:rax_5 = mulu.dp.q(-0x5555555555555555, sx.q(*(rdi_1 + 0x24)))
            arg1[0x3e].d = (rdx u>> 4).d
            goto label_142a7fd47
        
        result.b = 0
    else
        result = sub_142a7dd00(zx.q(rsi_2))
        *(rdi_1 + 0x48) = result
        
        if (result != 0)
            goto label_142a7fc82
        
        result.b = 0

return result
