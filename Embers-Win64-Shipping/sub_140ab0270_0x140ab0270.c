// 函数: sub_140ab0270
// 地址: 0x140ab0270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void var_b8
int64_t* rax_2 = sub_140ab1ed0(arg1 + 0x10, &var_b8)
int64_t* rcx_1 = *rax_2
int64_t* rax_3 = (*(*rcx_1 + 0x28))(rcx_1)
int64_t r9_1 = *rax_3
(*(r9_1 + 0x58))(rax_3, rax_2, arg3, r9_1)
int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rax_7 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*var_b0 + 8))(var_b0, 1)

int32_t rdi = 0

while (true)
    uint64_t rax_4
    
    if (rdi s< 0 || rdi s>= *(arg1 + 0x28))
        rax_4.b = 0
    else
        rax_4.b = 1
    
    if (rax_4.b == 0)
        break
    
    int32_t* rbx_4 = sx.q(rdi) * 0x30 + *(arg1 + 0x20)
    
    if (*rbx_4 == 4)
        int64_t* rcx_5 = *(rbx_4 + 0x10)
        int64_t* rax_10 = (*(*rcx_5 + 0x28))(rcx_5)
        int64_t r9_2 = *rax_10
        (*(r9_2 + 0x58))(rax_10, &rbx_4[4], arg3, r9_2)
    
    rdi += 1

int32_t rbx_5 = *(arg1 + 0x28)
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0

if (rbx_5 s> 0)
    sub_1409d9210(&var_98, rbx_5)
    int32_t rax_13
    
    if (rbx_5 u< 4)
        rax_13 = 1
    else
        uint32_t rbx_6 = rbx_5 u>> 1
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rbx_6 + 8)
        int32_t var_108_1 = temp0_3
        int32_t rcx_8
        
        if (rbx_6 == 0xfffffff8)
            rcx_8 = 0x20
        else
            rcx_8 = 0x1f - temp0_3
        
        int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rbx_6 + 7)
        int32_t var_104_1 = temp0_4
        
        if (rcx_10 == 0)
            rax_13 = 1
        else
            rax_13 = 1 << ((not.d(rcx_10)).b & (0x20 - (0x1f - temp0_4.b)))
    
    if (var_50 == 0 || var_50 s< rax_13)
        int32_t var_50_1 = rax_13
        sub_140abec40(&var_98)

int32_t i = 0

if (*(arg1 + 0x28) s> 0)
    do
        int64_t var_118 = 0
        int64_t var_110_1 = 0
        int32_t* rdi_3 = sx.q(i) * 0x30 + *(arg1 + 0x20)
        sub_140a20c40(&var_118, i)
        int32_t var_f0
        sub_140749df0(&var_98, &var_f0)
        int64_t* var_e8
        int64_t* rbx_8 = var_e8
        int32_t* rdx_7 = &rbx_8[1]
        *rbx_8 = 0
        *rbx_8 = var_118
        var_118 = 0
        *rdx_7 = var_110_1.d
        *(rbx_8 + 0xc) = var_110_1:4.d
        int64_t var_110_2 = 0
        void* rcx_17 = &rbx_8[4]
        rbx_8[2].d = *rdi_3
        rbx_8[3] = *(rdi_3 + 8)
        rbx_8[3] = *(rdi_3 + 8)
        rbx_8[3].d = rdi_3[2]
        rbx_8[3] = *(rdi_3 + 8)
        *(rcx_17 + 0x18) = 0
        
        if (rdi_3[0xa].b != 0)
            *rcx_17 = *(rdi_3 + 0x10)
            void* rax_24 = *(rdi_3 + 0x18)
            *(rcx_17 + 8) = rax_24
            
            if (rax_24 != 0)
                *(rax_24 + 8) += 1
                rbx_8 = var_e8
            
            *(rcx_17 + 0x10) = rdi_3[8]
            *(rcx_17 + 0x18) = 1
        
        rbx_8[8].d = 0xffffffff
        int16_t* rcx_18
        
        if (*rdx_7 == 0)
            rcx_18 = &data_142d40450
        else
            rcx_18 = *rbx_8
        
        void var_100
        sub_140aa7840(&var_98, &var_100, sub_140a5ff80(rcx_18, 0), rbx_8, var_f0, nullptr)
        int64_t rcx_21 = var_118
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        i += 1
    while (i s< *(arg1 + 0x28))

int64_t* rbx_9 = *(arg1 + 0x18)
int64_t rax_27 = *(arg1 + 0x10)

if (rbx_9 != 0)
    rbx_9[1].d += 1

int64_t rdi_4 = sx.q(arg3[1].d)
int32_t rax_28 = (rdi_4 + 1).d
arg3[1].d = rax_28

if (rax_28 s> *(arg3 + 0xc))
    sub_1407c3920(arg3)

int64_t* rdi_5 = arg2[1]
int64_t* rcx_24 = rdi_4 * 0x78 + *arg3

if (rdi_5 != 0)
    rdi_5[1].d += 1

int32_t rax_30 = arg2[2].d
*rcx_24 = *arg2
rcx_24[1] = rdi_5

if (rdi_5 != 0)
    rdi_5[1].d += 1

rcx_24[2].d = rax_30
rcx_24[3] = rax_27
rcx_24[4] = rbx_9

if (rbx_9 != 0)
    rbx_9[1].d += 1

sub_140a954b0(&rcx_24[5], &var_98)

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t rax_34 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

if (rbx_9 != 0)
    rbx_9[1].d -= 1
    
    if (rbx_9[1].d == 1)
        (**rbx_9)(rbx_9)
        int32_t r15_1 = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (r15_1 == 1)
            (*(*rbx_9 + 8))(rbx_9, zx.q(r15_1))

int32_t var_50_2 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t result = sub_140aa9190(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_33 = var_98

if (rcx_33 != 0)
    result = sub_140a74f90(rcx_33)

__security_check_cookie(rax_1 ^ &var_148)
return result
