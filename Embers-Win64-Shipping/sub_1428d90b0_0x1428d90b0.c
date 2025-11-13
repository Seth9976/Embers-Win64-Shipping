// 函数: sub_1428d90b0
// 地址: 0x1428d90b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r9 = arg2[1].d
int64_t* r15 = arg2
int32_t temp0 = arg3[1].d
int64_t* rdi = arg3

if (r9 s>= temp0)
    rdi = arg2

if (r9 s>= temp0)
    r15 = arg3

int32_t rbx = rdi[1].d
int64_t rbp = sx.q(r15[1].d)
int32_t i_1 = rbx - rbp.d
int64_t* result = sub_142890e60(arg1, rbx + 1)

if (result != 0)
    arg1[1].d = rbx
    int64_t* rdi_1 = *rdi
    int64_t* rbx_1 = *arg1
    int64_t r8_1 = sub_14291cd80(rbx_1, rdi_1, *r15, rbp.d)
    void* rbx_2 = &rbx_1[rbp]
    void* rdi_2 = &rdi_1[rbp]
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rdx_2 = *rdi_2
            rdi_2 += 8
            int64_t rdx_3 = rdx_2 + r8_1
            *rbx_2 = rdx_3
            rbx_2 += 8
            int64_t rax_1
            rax_1.b = rdx_3 == 0
            r8_1 &= rax_1
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *rbx_2 = r8_1
    result = 1
    arg1[1].d += r8_1.d
    arg1[2].d = 0

return result
