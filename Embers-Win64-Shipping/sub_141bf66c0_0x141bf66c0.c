// 函数: sub_141bf66c0
// 地址: 0x141bf66c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38
int64_t* rax = sub_1423c2170(arg1, &var_38)
int64_t* rbx = var_38
void* r15 = *rax

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        char rax_2
        
        if (rbx[2].b == 0 && data_143f0f1d0 == 0)
            rax_2 = sub_1405949a0()
        
        if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
            (**rbx)(rbx, 1)
        else
            bool z_1
            
            if (0 == *(rbx + 0xc))
                *(rbx + 0xc) = 1
                z_1 = true
            else
                *(rbx + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_4 = sub_140a20af0()
                uint64_t rdx_1 = zx.q(rax_4)
                void* const rax_5
                
                if (rax_4 != 0)
                    rax_5 =
                        *(&data_143cf0bf8 + (rdx_1 u>> 0xe << 3)) + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                else
                    rax_5 = nullptr
                
                *(rax_5 + 8) = rbx
                sub_1405a42f0(&data_143f02390, rdx_1.d)

int64_t* rcx_4 = data_143f0f180
uint64_t j_2 = zx.q(*(r15 + 0x60))
int32_t i_2 = *(r15 + 0x64)
int32_t arg_10 = 0
int64_t rax_11 = (*(*rcx_4 + 0x510))(rcx_4, &data_143f02b98, r15, 0, 1, &arg_10, 0, 0)

if (i_2 s> 0)
    int64_t rcx_5 = sx.q(j_2.d)
    uint64_t i_1 = zx.q(i_2)
    int64_t i_3 = sx.q(i_2)
    int64_t r9_2 = ((i_3 << 2) + -fffffffffffffffc) * rcx_5
    int64_t r10_1 = i_3 - 1
    uint64_t i
    
    do
        char* rdx_3 = *arg2 + r9_2
        char* rax_14 = zx.q(arg_10) * r10_1 + rax_11
        
        if (j_2.d s> 0)
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                char rcx_6 = *rdx_3
                rdx_3 = &rdx_3[4]
                *rax_14 = rcx_6
                rax_14 = &rax_14[4]
                rax_14[-3] = rdx_3[-3]
                rax_14[-2] = rdx_3[-2]
                rax_14[-1] = rdx_3[-1]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        r9_2 += neg.q(rcx_5) << 2
        r10_1 -= 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* rcx_10 = data_143f0f180
int32_t* var_50
var_50.b = 0
int64_t result = (*(*rcx_10 + 0x518))(rcx_10, &data_143f02b98, r15, 0, 0, var_50)

if (arg2 == 0)
    return result

int64_t rcx_11 = *arg2

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return j_sub_140a74f90(arg2)
