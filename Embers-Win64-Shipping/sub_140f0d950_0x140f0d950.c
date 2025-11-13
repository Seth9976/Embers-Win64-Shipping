// 函数: sub_140f0d950
// 地址: 0x140f0d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* var_128 = arg3
int32_t var_110 = 0
float* rdx = nullptr
*arg2 = 0
*(arg2 + 8) = 0
arg2[0x20] = 0
*(arg2 + 0x28) = 0
*(arg2 + 0x30) = 0
__builtin_memset(&arg2[0x38], 0, 0x18)
__builtin_memset(&arg2[0x48], 0, 0x68)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
uint64_t r14

if (*(arg4 + 0x5c) == 0)
    r14 = zx.q(arg1[0xb6].b)
else
    uint32_t rcx = zx.d(*(arg1 + 0x5b1))
    
    if (rcx == 0)
        r14.b = 0
    else if (rcx == 1)
        r14.b = 1
    else if (rcx != 2)
        r14 = zx.q(arg1[0xb6].b)
    else
        r14.b = 3

int64_t* rbx
int64_t r12

if ((r14.b == 0 || r14.b == 3) && (*(arg1 + 0x5b3) & 2) == 0)
    rbx = var_128
    r12.b = 0
else
    rbx = *(arg4 + 0x48)
    int64_t rax_2 = *(arg4 + 0x38)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    if (rax_2 != data_143e1e008)
        rdx = 1
    
    if (rax_2 != data_143e1e008 && *(arg4 + 0x5c) == 0)
        r12.b = 0
    else
        r12.b = 1
        rdx = 1

if ((rdx.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (r12.b != 0)
    (*(*arg1 + 0x260))(arg1)
    
    if (arg1[0x34].d != 0)
        int64_t* rcx_5 = arg1[0x33]
        
        if (rcx_5 != 0)
            char rax_7
            rax_7, rdx = (*(*rcx_5 + 0x28))(rcx_5)
            
            if (rax_7 != 0)
                if (arg1[0x34].d == 0)
                    char rax_11
                    rax_11, rdx = (*(*nullptr + 0x48))(0)
                    arg1[0x32].b = rax_11
                else
                    int64_t* rcx_6 = arg1[0x33]
                    char rax_9
                    rax_9, rdx = (*(*rcx_6 + 0x48))(rcx_6)
                    arg1[0x32].b = rax_9
    
    char var_108
    
    if (arg1[0x32].b != 0 && r14.b != 1)
        char rax_13
        rax_13, rdx = (*(*arg1 + 0x1c8))(arg1)
        
        if (rax_13 != 0)
        label_140f0dbb9:
            
            if (r14.b != 2)
                rax_13, rdx = sub_140e19840(arg1, arg5)
            
            if (r14.b == 2 || rax_13 != 0)
                rax_13 = 1
            
            if (r14.b == 3 || rax_13 != 0)
                char* rax_15
                rax_15, arg5 = sub_140efc890(arg1, &var_108, arg5)
                sub_1405979f0(arg2, rax_15)
                sub_140597700(&var_108)
        else if (*(arg4 + 0x5c) != rax_13)
            int64_t* rax_14 = var_128
            float zmm4_1 = *rax_14
            float zmm5_1 = *(rax_14 + 4)
            arg5.o = rax_14[6].d
            float var_120_1 = zmm4_1 f* *(rax_14 + 0x1c)
            float var_118_1 = zmm5_1 f* *(rax_14 + 0x24)
            var_128.d = (*(rax_14 + 0x2c)).d
            var_128:4.d = arg5.d
            float var_11c_1 = zmm4_1 f* rax_14[4].d
            float var_114_1 = zmm5_1 f* rax_14[5].d
            rax_13, arg5 = sub_140db3460(&var_128, arg4 + 0x18)
            
            if (rax_13 != 0)
                goto label_140f0dbb9
    
    if (*arg2 == 0)
        int32_t var_54
        int32_t var_54_1 = var_54 & 0xffffff00
        var_108 = 1
        arg5.o = zx.o(0)
        int64_t var_100_1 = 0
        int64_t var_f8_1 = 0
        char var_e8_1 = 0
        int64_t var_e0
        __builtin_memset(&var_e0, 0, 0x88)
        int32_t var_58_1 = 0x20702
        sub_1405979f0(arg2, &var_108)
        sub_140597700(&var_108)

int64_t* rbx_1 = *(arg2 + 0x40)

if (rbx_1 == 0)
label_140f0dc9b:
    char rax_18
    rax_18, rdx = sub_140e19840(arg1, arg5)
    
    if (rax_18 == 0)
        r14.b = 0
    else
        r14.b = 1
else
    int32_t rax_16 = rbx_1[1].d
    
    if (rax_16 == 0)
        rbx_1 = nullptr
    else
        rbx_1[1].d = rax_16 + 1
    
    if (rbx_1 == 0 || *(arg2 + 0x38) == 0)
        goto label_140f0dc9b
    
    r14.b = 0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (r14.b != 0)
    if (&arg2[0x38] != &var_128)
        *(arg2 + 0x38) = 0
        int64_t* rcx_18 = *(arg2 + 0x40)
        *(arg2 + 0x40) = 0
        
        if (rcx_18 != 0)
            int32_t temp5_1 = *(rcx_18 + 0xc)
            *(rcx_18 + 0xc) -= 1
            
            if (temp5_1 == 1)
                int64_t r8 = *rcx_18
                (*(r8 + 8))(rcx_18, 1, r8)
    
    *(arg2 + 0xb4) = (*(arg2 + 0xb4) | 1) & 0xffffffdf

rdx.b = 1
sub_140e19ef0(arg1, rdx.b)
__security_check_cookie(rax_1 ^ &var_148)
return arg2
