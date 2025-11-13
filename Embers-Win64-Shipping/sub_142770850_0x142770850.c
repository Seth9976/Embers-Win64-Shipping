// 函数: sub_142770850
// 地址: 0x142770850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14349d450
arg1[0x11] = &data_14349d4b8
sub_142774610(arg1)
sub_142774410(arg1[0x14])
arg1[0x16].d = 0
int64_t* rdi = data_143f879f0

if (rdi != 0)
    int64_t* r9_1 = *rdi
    uint64_t r10_1 = sx.q(rdi[1].d)
    int64_t* rcx_1 = r9_1
    void* rdx_1 = &r9_1[r10_1]
    
    if (r9_1 != rdx_1)
        do
            if (*rcx_1 == arg1)
                int32_t rcx_3 = ((rcx_1 - r9_1) s>> 3).d
                
                if (rcx_3 != 0xffffffff)
                    int32_t rax_3 = r10_1.d - rcx_3 - 1
                    
                    if (rax_3 s>= 1)
                        rax_3 = 1
                    
                    if (rax_3 != 0)
                        memcpy(&r9_1[sx.q(rcx_3)], &r9_1[sx.q(r10_1.d - rax_3)], rax_3 << 3)
                        r10_1 = zx.q(rdi[1].d)
                    
                    rdi[1].d = (r10_1 - 1).d
                    sub_1405c53d0(rdi)
                
                break
            
            rcx_1 = &rcx_1[1]
        while (rcx_1 != rdx_1)

int64_t rcx_6 = arg1[0x14]

if (rcx_6 != 0)
    j_sub_140a74f90(rcx_6)
    arg1[0x14] = 0

sub_141c31b70(&arg1[0x28])
int64_t rcx_8 = arg1[0x25]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x22]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x1d]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x17]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

sub_140a1d7d0(&arg1[0x11])
*arg1 = &data_14349d3e8
int64_t result = sub_141c32420(&arg1[3])
int64_t* rcx_14 = arg1[2]

if (rcx_14 != 0)
    int32_t temp0_1 = *(rcx_14 + 0xc)
    *(rcx_14 + 0xc) -= 1
    
    if (temp0_1 == 1)
        return (*(*rcx_14 + 8))(rcx_14, 1)

return result
