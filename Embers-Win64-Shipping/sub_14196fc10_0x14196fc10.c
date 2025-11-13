// 函数: sub_14196fc10
// 地址: 0x14196fc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[2]
int64_t* rcx = data_143f0f180
int64_t* arg_20
(*(*rcx + 0x708))(rcx, &arg_20, &arg1[3])
sub_141962b90(rbx + 0x18, &arg_20)
int64_t* rbx_1 = arg_20
void** rdi = nullptr

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        if (rbx_1[2].b == 0)
            bool z_1
            
            if (0 == *(rbx_1 + 0xc))
                *(rbx_1 + 0xc) = 1
                z_1 = true
            else
                *(rbx_1 + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_4 = sub_140a20af0()
                uint64_t rdx_2 = zx.q(rax_4)
                void* const rax_5
                
                if (rax_4 != 0)
                    rax_5 =
                        *(&data_143cf0bf8 + (rdx_2 u>> 0xe << 3)) + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                else
                    rax_5 = nullptr
                
                *(rax_5 + 8) = rbx_1
                sub_1405a42f0(&data_143f02390, rdx_2.d)
        else
            (**rbx_1)(rbx_1, 1)

sub_1419825b0(&arg1[2], &arg1[0x16])
sub_1419825b0(&arg1[2], &arg1[0x14])
sub_1419825b0(&arg1[2], &arg1[0x12])
sub_1419825b0(&arg1[2], &arg1[0x10])
char var_b4 = 1
int64_t var_b0 = 0
int64_t var_a0 = 0
*(arg1 + 0x18) = 0x18.o
int64_t var_90 = 0
*(arg1 + 0x28) = 0.o
int64_t var_80 = 0
*(arg1 + 0x38) = 0.o
int64_t var_70
__builtin_memset(&var_70, 0, 0x18)
*(arg1 + 0x48) = 0.o
*(arg1 + 0x58) = 0.o
int64_t var_68
*(arg1 + 0x68) = var_68.o
arg1[0xf] = 0
int64_t rcx_10 = arg1[0x16]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x14]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x12]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x10]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

arg1[0x18].b = 0
sub_140a22e70(arg1[0x19], arg2, arg3)
*arg1 = &data_143001fb8
int64_t* rcx_15 = arg1[0x19]

if (rcx_15 != 0)
    rcx_15[9].d -= 1
    
    if (rcx_15[9].d == 1)
        sub_140a2f6e0(rcx_15)

*arg1 = &data_142d40498
int64_t* result = TlsGetValue(data_143cf0950)
int64_t* lpTlsValue = result

if (result == 0)
    int64_t* lpTlsValue_1 = j_sub_140a82f30(zx.q((&result[3]).d))
    lpTlsValue = lpTlsValue_1
    
    if (lpTlsValue_1 == 0)
        lpTlsValue = nullptr
    else
        __builtin_memset(lpTlsValue_1, 0, 0x14)
    
    result = TlsSetValue(data_143cf0950, lpTlsValue)

if (lpTlsValue[2].d s< 0x20)
    rdi = lpTlsValue[1]
else
    int64_t rdx_9 = *lpTlsValue
    
    if (rdx_9 != 0)
        sub_1405a43b0(&data_143cf0958, rdx_9)
    
    result = lpTlsValue[1]
    *lpTlsValue = result
    lpTlsValue[1] = 0
    lpTlsValue[2].d = 0

*arg1 = rdi
lpTlsValue[2].d += 1
lpTlsValue[1] = arg1
return result
