// 函数: sub_141405ae0
// 地址: 0x141405ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_10 = arg2
int32_t* rbx = arg2
int32_t rax = *arg2
void* rsi = arg1
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(rax)
int64_t __saved_r15
int32_t r9

if (&__saved_r15 == 0xb0)
    r9 = 0x20
else
    r9 = 0x1f - temp0

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(rax - 1)
int32_t r10

if (rax == 1)
    r10 = 0x20
else
    r10 = 0x1f - temp0_1

int32_t rax_2 = sub_1413e8260(rsi, arg3)
int64_t* rdx_3 = *(rsi + 0x1070) + 0x10
int64_t* var_58 = rdx_3
int32_t r8 = rax_2
int32_t var_70 = 0
int32_t r9_4 = 0
int32_t i_1 = 0
int32_t i = 0

if (((0x20 - r10) & not.d(r9 << 0x1a s>> 0x1f)) + 1 s> 0)
    int32_t rax_3 = (0x20 - r10) & not.d(r9 << 0x1a s>> 0x1f)
    int32_t var_68_1 = rax_3
    
    do
        int32_t j_1 = 0
        int32_t j = 0
        uint64_t rsi_1 = zx.q(1 << rax_3.b)
        int32_t r13_1 = r9_4
        uint64_t rdi_5 = zx.q((rsi_1.d * rsi_1.d) << 3)
        int32_t var_64_1 = rdi_5.d
        
        do
            int64_t* rcx_3 = data_143f0f180
            int32_t var_78 = 0
            int64_t rax_5 =
                (*(*rcx_3 + 0x600))(rcx_3, &data_143f02b98, *rdx_3, zx.q(j), r8, i, 1, &var_78, 0)
            int32_t k = 0
            
            if (rsi_1.d s> 0)
                int32_t* r14_1 = arg_10
                int32_t rdi_6 = r13_1
                
                do
                    memcpy(zx.q(k * var_78) + rax_5, sx.q(rdi_6) + *(r14_1 + 0x10), rsi_1.d << 3)
                    k += 1
                    rdi_6 += (rsi_1 << 3).d
                while (k s< rsi_1.d)
                
                j = j_1
                rdi_5 = zx.q(var_64_1)
                i = i_1
            
            int64_t* rcx_7 = data_143f0f180
            (*(*rcx_7 + 0x608))(rcx_7, &data_143f02b98, *var_58, zx.q(j), rax_2, i, 0)
            rdx_3 = var_58
            j += 1
            r8 = rax_2
            r13_1 += rdi_5.d
            j_1 = j
        while (j s< 6)
        
        i += 1
        i_1 = i
        r9_4 = var_70 + ((rdi_5 * 3).d << 1)
        rax_3 = var_68_1 - 1
        var_70 = r9_4
        var_68_1 = rax_3
    while (i s< ((0x20 - r10) & not.d(r9 << 0x1a s>> 0x1f)) + 1)
    
    rbx = arg_10
    rsi = arg1

sub_140865c40(rsi + 0x1078, &arg_10, arg3)
int64_t rax_9 = sx.q(arg_10.d)
int32_t rcx_9 = rbx[1]

if (rax_9.d == 0xffffffff)
    *0xc = rcx_9
    return rax_9

int64_t rax_10 = *(rsi + 0x1078)
*(rax_10 + rax_9 * 0x18 + 0xc) = rcx_9
return rax_10
