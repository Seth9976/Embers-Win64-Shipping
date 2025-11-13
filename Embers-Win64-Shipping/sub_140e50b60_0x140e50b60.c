// 函数: sub_140e50b60
// 地址: 0x140e50b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
*arg1 = 0
arg1[1] = 0
void* rcx = &arg1[2]
int64_t var_40 = 0
int64_t var_30 = 0
int64_t var_78 = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)
int64_t var_70 = 0
int64_t var_58 = 0

if (rax_2 != 0)
    rcx = rax_2

int32_t var_50 = 0
int32_t var_4c = 0x80
int64_t var_68 = 0
int64_t var_60 = 0
*rcx = 0
*(rcx + 8) = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
__builtin_memset(&arg1[0xa], 0, 0x20)
int32_t i_2 = arg1[0xb].d
void* rbx = arg1[0xa]
int32_t var_48 = 0xffffffff
int32_t var_44 = 0
int64_t var_38 = 0

if (i_2 != 0)
    int32_t i
    
    do
        *(rbx + 0x48) = 0
        int64_t rcx_1 = *(rbx + 0x40)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_14095cf80(rbx, 0)
        int64_t rcx_3 = *(rbx + 0x20)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rbx
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx += 0x50
        i = i_2
        i_2 -= 1
    while (i != 1)

int64_t i_3 = 2
arg1[0xb].d = 0

if (*(arg1 + 0x5c) != 2)
    sub_1405a5310(&arg1[0xa], 2)

int64_t i_1

do
    int64_t rbx_1 = sx.q(arg1[0xb].d)
    int32_t rax_3 = (rbx_1 + 1).d
    arg1[0xb].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x5c))
        sub_1405c5060(&arg1[0xa])
    
    int64_t rcx_8 = rbx_1 * 0x50
    int64_t* rcx_9 = rcx_8 + arg1[0xa]
    
    if (rcx_8 != neg.q(arg1[0xa]))
        *rcx_9 = 0
        void* rdx_2 = &rcx_9[2]
        rcx_9[1] = 0
        *(rdx_2 + 0x10) = 0
        *(rdx_2 + 0x18) = 0
        *(rdx_2 + 0x1c) = 0x80
        void* rax_4 = *(rdx_2 + 0x10)
        
        if (rax_4 != 0)
            rdx_2 = rax_4
        
        *rdx_2 = 0
        *(rdx_2 + 8) = 0
        rcx_9[6].d = 0xffffffff
        *(rcx_9 + 0x34) = 0
        rcx_9[8] = 0
        rcx_9[9].d = 0
        sub_140e549f0(rcx_9, &var_78)
    
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
var_30.d = 0

if (var_38 != 0)
    sub_140a74f90(var_38)

sub_14095cf80(&var_78, 0)

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t rcx_13 = var_78

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

__security_check_cookie(rax_1 ^ &var_98)
return arg1
