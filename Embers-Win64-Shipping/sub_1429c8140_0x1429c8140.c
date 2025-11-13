// 函数: sub_1429c8140
// 地址: 0x1429c8140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg4)
int64_t r15 = sx.q(arg3)
int64_t rbp = sx.q(arg2)
__CheckForDebuggerJustMyCode(&data_14427d007)
uint64_t result = zx.q(r15.d - rbp.d + 1)
bool cond:2 = result.d == 2

if (result.d s>= 2)
    int64_t r9 = r15
    int64_t rbx_1 = rbp
    int32_t r12_1 = arg5
    
    do
        int64_t zmm1
        
        if (cond:2)
            int64_t r8_2 = sx.q(rbp.d)
            result = zx.q(*(arg1 + ((r9 * 3 + r13) << 2)))
            
            if (*(arg1 + ((r8_2 * 3 + r13) << 2)) s> result.d)
                int64_t rax_13 = r8_2 * 3
                int32_t r8_3 = *(arg1 + (rax_13 << 2) + 8)
                zmm1 = *(arg1 + (rax_13 << 2))
                int64_t* rdx_7 = arg1 + (rax_13 << 2)
                int64_t rax_14 = r9 * 3
                int64_t* rcx_18 = arg1 + (rax_14 << 2)
                *rdx_7 = *(arg1 + (rax_14 << 2))
                result = zx.q(rcx_18[1].d)
                rdx_7[1].d = result.d
                *rcx_18 = zmm1
                rcx_18[1].d = r8_3
            
            break
        
        int32_t rdi_1 = rbp.d
        r12_1 += rol.d(r12_1, r12_1.b & 0x1f) + 3
        int32_t r11_1 = r15.d
        int32_t i = *(arg1 + ((sx.q(modu.dp.d(0:r12_1, r15.d - rbp.d + 1) + rbp.d) * 3 + r13) << 2))
        
        do
            int64_t rcx_9 = rbx_1 * 3 + r13
            int32_t* rax_8 = arg1 + (rcx_9 << 2)
            
            if (*(arg1 + (rcx_9 << 2)) s< i)
                do
                    rdi_1 += 1
                    rax_8 = &rax_8[3]
                    rbx_1 += 1
                while (*rax_8 s< i)
            
            int64_t rcx_12 = r9 * 3 + r13
            result = arg1 + (rcx_12 << 2)
            
            if (*(arg1 + (rcx_12 << 2)) s> i)
                do
                    r11_1 -= 1
                    result -= 0xc
                    r9 -= 1
                while (*result s> i)
            
            if (rbx_1 s> r9)
                break
            
            int64_t rax_9 = rbx_1 * 3
            rdi_1 += 1
            zmm1 = *(arg1 + (rax_9 << 2))
            int64_t* rdx_2 = arg1 + (rax_9 << 2)
            int32_t r8 = rdx_2[1].d
            int64_t rax_10 = r9 * 3
            int64_t* rcx_13 = arg1 + (rax_10 << 2)
            *rdx_2 = *(arg1 + (rax_10 << 2))
            rbx_1 += 1
            result = zx.q(rcx_13[1].d)
            r11_1 -= 1
            rdx_2[1].d = result.d
            r9 -= 1
            *rcx_13 = zmm1
            rcx_13[1].d = r8
        while (rbx_1 s<= r9)
        
        if (rbp.d s< r11_1)
            result = sub_1429c8140(arg1, zx.q(rbp.d), zx.q(r11_1), zx.q(r13.d), r12_1)
        
        if (rdi_1 s>= r15.d)
            break
        
        rbp = zx.q(rdi_1)
        __CheckForDebuggerJustMyCode(&data_14427d007)
        r9 = r15
        result = zx.q(r15.d - rdi_1 + 1)
        cond:2 = result.d == 2
    while (result.d s>= 2)

return result
