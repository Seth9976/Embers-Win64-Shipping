// 函数: sub_1409aa2b0
// 地址: 0x1409aa2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
*arg1 = 0
arg1[1] = 0
void* rcx = &arg1[2]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
arg1[0xa].b = arg3
*(arg1 + 0x51) = arg4
int32_t rbx = arg2[1].d

if (rbx s> arg1[1].d - *(arg1 + 0x34))
    sub_1409d9850(arg1, rbx)
    int32_t rax_7
    
    if (rbx u< 4)
        rax_7 = 1
    else
        uint32_t rbx_1 = rbx u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_1 + 8)
        int32_t rcx_2
        
        if (rbx_1 == 0xfffffff8)
            rcx_2 = 0x20
        else
            rcx_2 = 0x1f - temp0_2
        
        int32_t rcx_4 = rcx_2 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_1 + 7)
        
        if (rcx_4 == 0)
            rax_7 = 1
        else
            rax_7 = 1 << ((not.d(rcx_4)).b & (0x20 - (0x1f - temp0_3)))
    
    int32_t rcx_7 = arg1[9].d
    
    if (rcx_7 == 0 || rcx_7 s< rax_7)
        arg1[9].d = rax_7
        sub_1405c0690(arg1)

int64_t* rbx_3 = *arg2
int64_t rdi_1 = 0
uint64_t rsi_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rbx_3 u> &rbx_3[arg2[1]])
    rsi_1 = 0

int32_t var_110
int64_t* var_108
int64_t var_100

if (rsi_1 != 0)
    var_108 = &var_100
    
    do
        var_100 = *rbx_3
        sub_140999140(arg1, &var_110, &var_108, nullptr)
        rdi_1 += 1
        rbx_3 = &rbx_3[1]
    while (rdi_1 != rsi_1)

int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_128 = 0
int32_t var_120 = 0
int32_t var_118 = 0xffffffff
sub_140d3cc80(sub_1425b0750(), &var_128, 1, 0x10, 0)
int32_t rdi_2 = var_120
uint64_t rbx_5 = zx.q(var_118 + 1)
int64_t rsi_2 = var_128
int32_t var_118_1 = rbx_5.d

if (rbx_5.d s< rdi_2)
    while (*(rsi_2 + (sx.q(rbx_5.d) << 3)) == 0)
        int32_t rax_13 = (rbx_5 + 1).d
        var_118_1 = rax_13
        rbx_5 = zx.q(rax_13)
        
        if (rax_13 s>= rdi_2)
            break

while (rbx_5.d s>= 0)
    if (rbx_5.d s>= rdi_2)
        break
    
    int64_t* r14_1 = *(rsi_2 + (sx.q(rbx_5.d) << 3))
    int64_t r12_1 = r14_1[0x88]
    int32_t* rax_15 = sub_1405ba560(arg1, &var_108, r12_1)
    char rcx_12 = r14_1[0x11].b
    
    if (*rax_15 == 0xffffffff)
        if ((rcx_12 & 0x20) != 0 && (rcx_12 & 1) != 0)
            int64_t rdx_8 = 0x30
            
            if (sub_140d23dc0(r14_1, 0x30) != 0)
                goto label_1409aa61d
            
            rbx_5 = sx.q(var_118_1)
            rsi_2 = var_128
            int64_t* r8_7 = *(rsi_2 + (rbx_5 << 3))
            int32_t rax_24 = *(r8_7 + 0xc)
            void* const rax_28
            
            if (rax_24 s>= data_143e1d9b4)
                rax_28 = nullptr
            else
                uint32_t rdx_9 = zx.d(rax_24.w)
                
                if (rax_24 s< 0)
                    rax_24 += 0xffff
                    rdx_9 -= 0x10000
                
                rdx_8 = sx.q(rdx_9) * 3
                rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3)) + (rdx_8 << 3)
            
            if (((*(rax_28 + 8) u>> 0x1d).b & 1) != 0)
                rdi_2 = var_120
            else
                sub_141ee03d0(r8_7, rdx_8)
            label_1409aa61d:
                rbx_5 = zx.q(var_118_1)
                rsi_2 = var_128
                rdi_2 = var_120
    else if ((rcx_12 & 2) != 0)
        (*(*r14_1 + 0x2e8))(r14_1)
        int64_t rsi_3 = *(var_128 + (sx.q(var_118_1) << 3))
        sub_1405ba560(arg1, &var_110, r12_1)
        int64_t rax_18 = sx.q(var_110)
        void* const rcx_18
        
        if (rax_18.d == 0xffffffff)
            rcx_18 = nullptr
        else
            rcx_18 = (rax_18 << 5) + *arg1
        
        int64_t rdi_3 = sx.q(*(rcx_18 + 0x10))
        int32_t rax_19 = (rdi_3 + 1).d
        *(rcx_18 + 0x10) = rax_19
        
        if (rax_19 s> *(rcx_18 + 0x14))
            sub_1405a4d70(rcx_18 + 8)
        
        *(*(rcx_18 + 8) + (rdi_3 << 3)) = rsi_3
        void* var_f8 = sub_141ee6400(*(var_128 + (sx.q(var_118_1) << 3)))
        sub_140812a70(&var_98, &var_100, &var_f8, nullptr)
        goto label_1409aa61d
    
    int32_t rax_31 = (rbx_5 + 1).d
    var_118_1 = rax_31
    rbx_5 = zx.q(rax_31)
    
    if (rax_31 s< rdi_2)
        while (*(rsi_2 + (sx.q(rbx_5.d) << 3)) == 0)
            int32_t rax_33 = (rbx_5 + 1).d
            var_118_1 = rax_33
            rbx_5 = zx.q(rax_33)
            
            if (rax_33 s>= rdi_2)
                break

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

void var_f0
sub_141efdf70(sub_14077e140(&var_f0, &var_98))
sub_1419a21e0(0)
int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_90
var_90.d = 0
int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_34 = var_98

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

__security_check_cookie(rax_1 ^ &var_158)
return arg1
