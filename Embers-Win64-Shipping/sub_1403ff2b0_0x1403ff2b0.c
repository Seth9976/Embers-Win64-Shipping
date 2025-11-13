// 函数: sub_1403ff2b0
// 地址: 0x1403ff2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg5)
int64_t r11 = sx.q(arg4)
float* rbx = arg1

if (result.d s> 0)
    int32_t* r12_1 = *(arg3 + 0x38)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        uint32_t r9 = 0
        float* rcx = rbx
        void* rdx = &rbx[r11 * 2]
        int32_t* r8 = r12_1
        float zmm3
        float zmm4
        float zmm5
        
        if (r11.d s>= 4)
            int64_t rdi_1 = arg2 << 3
            result = zx.q(((r11 - 4).d u>> 2) + 1)
            uint64_t j_3 = zx.q(result.d)
            r9 = (result << 2).d
            uint64_t j
            
            do
                zmm5 = *r8
                float zmm1 = *(rdx + 4)
                float zmm2 = *rdx
                zmm4 = zmm2 * zmm5
                void* r8_1 = &r8[arg2 * 2]
                zmm5 = zmm5 * zmm1 - zmm2 f* r8[1]
                zmm4 = zmm4 + zmm1 f* r8[1]
                *rdx = *rcx - zmm4
                *(rdx + 4) = rcx[1] - zmm5
                zmm5 = zmm5 + rcx[1]
                *rcx = zmm4 + *rcx
                rcx[1] = zmm5
                zmm5 = *(rdx + 0xc)
                zmm2 = *(rdx + 8)
                void* r8_2 = r8_1 + rdi_1
                zmm4 = zmm2 f* *r8_1 + zmm5 f* *(r8_1 + 4)
                zmm5 = zmm5 f* *r8_1 - zmm2 f* *(r8_1 + 4)
                *(rdx + 8) = rcx[2] - zmm4
                *(rdx + 0xc) = rcx[3] - zmm5
                zmm5 = zmm5 + rcx[3]
                rcx[2] = zmm4 + rcx[2]
                rcx[3] = zmm5
                zmm5 = *(rdx + 0x14)
                zmm2 = *(rdx + 0x10)
                void* r8_3 = r8_2 + rdi_1
                zmm4 = zmm2 f* *r8_2 + zmm5 f* *(r8_2 + 4)
                zmm5 = zmm5 f* *r8_2 - zmm2 f* *(r8_2 + 4)
                *(rdx + 0x10) = rcx[4] - zmm4
                *(rdx + 0x14) = rcx[5] - zmm5
                zmm5 = zmm5 + rcx[5]
                rcx[4] = zmm4 + rcx[4]
                rcx[5] = zmm5
                zmm5 = *(rdx + 0x1c)
                zmm3 = *(rdx + 0x18)
                r8 = r8_3 + rdi_1
                zmm4 = zmm5 f* *(r8_3 + 4) + zmm3 f* *r8_3
                zmm5 = zmm5 f* *r8_3 - zmm3 f* *(r8_3 + 4)
                *(rdx + 0x18) = rcx[6] - zmm4
                *(rdx + 0x1c) = rcx[7] - zmm5
                zmm4 = zmm4 + rcx[6]
                zmm5 = zmm5 + rcx[7]
                rcx = &rcx[8]
                rdx += 0x20
                rcx[-2] = zmm4
                rcx[-1] = zmm5
                j = j_3
                j_3 -= 1
            while (j != 1)
        
        if (r9 s< r11.d)
            int64_t rdx_1 = rdx - rcx
            result = zx.q(r11.d - r9)
            uint64_t j_2 = zx.q(result.d)
            uint64_t j_1
            
            do
                zmm3 = r8[1]
                zmm5 = *r8
                rcx = &rcx[2]
                r8 = &r8[arg2 * 2]
                zmm4 = zmm5 f* *(rdx_1 + rcx - 8) + zmm3 f* *(rdx_1 + rcx - 4)
                zmm5 = zmm5 f* *(rdx_1 + rcx - 4) - zmm3 f* *(rdx_1 + rcx - 8)
                *(rdx_1 + rcx - 8) = rcx[-2] - zmm4
                *(rdx_1 + rcx - 4) = rcx[-1] - zmm5
                zmm5 = zmm5 + rcx[-1]
                rcx[-2] = zmm4 + rcx[-2]
                rcx[-1] = zmm5
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        rbx = &rbx[sx.q(arg6) * 2]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
