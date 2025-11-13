// 函数: sub_141a331d0
// 地址: 0x141a331d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1efe8
arg1[5] = &data_14302f210
int64_t* rcx = data_143f5b298

if (rcx != 0 && arg1[0x10f].b != 0)
    (*(*rcx + 0x2c0))(rcx, _mm_cvtpd_ps(zx.o(arg1[0x10e])))

if (*(arg1 + 0x884) != 0)
    *(arg1 + 0x884) = 0

if (arg1[0x10f].b != 0)
    arg1[0x10f].b = 0

sub_140596eb0(&arg1[0x10b])
int64_t* rdi = arg1[0x10a]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x104]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (arg1[0x102].b != 0)
    arg1[0x102].b = 0

if (*(arg1 + 0x7e4) != 0)
    *(arg1 + 0x7e4) = 0

sub_141a32f70(&arg1[0x94])
int64_t rcx_7 = arg1[0x8f]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x89]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x87]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x85]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x83]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x81]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_141a33110(&arg1[5])
return sub_140d163b0(arg1) __tailcall
