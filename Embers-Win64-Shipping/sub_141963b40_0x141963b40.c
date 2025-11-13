// 函数: sub_141963b40
// 地址: 0x141963b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rcx = arg1[1]
int64_t* rdx = *rcx

if (&rdx[1] u<= rcx[1])
    *arg2 = *rdx
    int64_t* rax_4 = arg1[1]
    *rax_4 += 8
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2, 8)

int64_t* rcx_2 = arg1[1]
int64_t* r8 = *rcx_2

if (&r8[1] u<= rcx_2[1])
    arg2[1] = *r8
    int64_t* rax_8 = arg1[1]
    *rax_8 += 8
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b540d0(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 8)

sub_1409ac860(arg1, &arg2[2], arg3)
sub_1419642c0(arg1, &arg2[4], arg3)
int32_t rax_10 = arg1[0xb].d

if (rax_10 == 9)
    int32_t var_4c_1 = 0x80
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    int64_t var_68
    __builtin_memset(&var_68, 0, 0x1c)
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    int32_t var_48_1 = 0xffffffff
    arg3 = sub_141964790(arg1, &var_78, arg3)
    int64_t r9_1 = var_38_1
    
    if ((arg1[5].b & 1) != 0)
        if (r9_1 != 0)
            int64_t rax_11 = sub_140a84c80(r9_1, 0, 0, r9_1)
            r9_1 = rax_11
            var_38_1 = rax_11
        
        int32_t rdx_7 = var_70_1 - var_44_1
        int32_t rax_16
        
        if (rdx_7 u< 4)
            rax_16 = 1
        else
            uint32_t rax_13 = rdx_7 u>> 1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13 + 8)
            int32_t rcx_8
            
            if (rax_13 == 0xfffffff8)
                rcx_8 = 0x20
            else
                rcx_8 = 0x1f - temp0_2
            
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_13 + 7)
            
            if (rax_13 == 0xfffffff9)
                rax_16 = 1
            else
                rax_16 = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3)))
        
        if (rdx_7 s> 0)
            int32_t var_30_2 = rax_16
            arg3 = sub_140771f10(&var_78)
            r9_1 = var_38_1
    
    int32_t var_30_3 = 0
    
    if (r9_1 != 0)
        arg3 = sub_140a74f90(r9_1)
    
    var_70_1 = 0
    int32_t var_48_2 = 0xffffffff
    int32_t var_44_2 = 0
    sub_14059a8e0(&var_68, 0)
    int64_t var_58
    
    if (var_58 != 0)
        arg3 = sub_140a74f90(var_58)
    
    int64_t rcx_18 = var_78
    
    if (rcx_18 != 0)
        arg3 = sub_140a74f90(rcx_18)
else if (rax_10 u>= 0xa)
    arg3 = sub_141964eb0(arg1, &arg2[9], arg3)
    
    if ((arg1[5].b & 1) != 0)
        int64_t rcx_20 = arg2[0x11]
        
        if (rcx_20 != 0)
            arg2[0x11] = sub_140a84c80(rcx_20, 0, 0)
        
        arg2[0x12].d = 0
        arg3 = sub_141968320(&arg2[9], arg2[0xa].d - *(arg2 + 0x7c), 0)

if (arg1[0xb].d u>= 0xd)
    int64_t* rcx_22 = arg1[1]
    int64_t* r8_3 = *rcx_22
    
    if (&r8_3[1] u<= rcx_22[1])
        arg2[0x13] = *r8_3
        int64_t* rax_20 = arg1[1]
        *rax_20 += 8
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b540d0(arg1, &arg2[0x13], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0x13], 8)

if (arg1[0xb].d u>= 0x10)
    int64_t* rdx_12 = arg1[1]
    int16_t* rax_22 = *rdx_12
    
    if (&rax_22[1] u<= rdx_12[1])
        arg2[0x14].w = *rax_22
        int64_t* rcx_26 = arg1[1]
        *rcx_26 += 2
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54000(arg1, &arg2[0x14], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[0x14], 2)

__security_check_cookie(rax_1 ^ &var_98)
return arg1
