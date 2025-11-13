// 函数: sub_140f44dc0
// 地址: 0x140f44dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
char var_88 = data_1439ae51c
int64_t var_80 = 0
int32_t var_78 = 0
char var_87 = 1
sub_140e253b0(arg1, &var_88)
void var_70
sub_140de1590(&arg1[0x88], sub_140d91ed0(&var_70))
int32_t zmm0 = sub_140d952d0(&var_70)

if (arg1[0x7c].d != 0)
    int64_t* rcx_3 = arg1[0x7b]
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
        int64_t* rcx_4
        
        if (arg1[0x7c].d == 0)
            rcx_4 = nullptr
        else
            rcx_4 = arg1[0x7b]
        
        (*(*rcx_4 + 0x48))(rcx_4)
        arg1[0x7a].d = zmm0

int64_t rdx_3 = 0
int128_t zmm0_1 = *sub_140d986d0(arg1 + 0x440, &var_88, (zx.o(0)).q, arg1[0x7a].d.d, 0)
*(arg1 + 0x4a0) = zmm0_1
int64_t* rcx_6 = arg1[2]

if (rcx_6 != 0)
    int32_t rax_6 = rcx_6[1].d
    
    if (rax_6 != 0)
        rcx_6[1].d = rax_6 + 1
        rax_6.b = 1
    
    if (rax_6.b == 0)
        rcx_6 = nullptr
    
    if (rcx_6 != 0)
        rdx_3 = arg1[1]

var_88.q = rdx_3
sub_140db7a20(&arg1[0x88], &var_88, 0, zx.o(0), zmm0_1.q, 1)

if (rcx_6 != 0)
    rcx_6[1].d -= 1
    
    if (rcx_6[1].d == 1)
        (**rcx_6)(rcx_6)
        int32_t temp1_1 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_6 + 8))(rcx_6, 1)

sub_140de1590(&arg1[0x96], sub_140d91ed0(&var_70))
sub_140d952d0(&var_70)
*(arg1 + 0x510) = *sub_140d986d0(arg1 + 0x4b0, &var_88, 0.200000003f, 0x3e99999a.d, 2)
*(arg1 + 0x520) = *sub_140d986d0(arg1 + 0x4b0, &var_88, (zx.o(0)).q, 0x3e4ccccd.d, 0)
int64_t rdx_9 = 0
int128_t zmm0_4 = *sub_140d986d0(arg1 + 0x4b0, &var_88, 0.5f, 0x3f0ccccd.d, 2)
*(arg1 + 0x530) = zmm0_4
int64_t* rcx_16 = arg1[2]

if (rcx_16 != 0)
    int32_t rax_13 = rcx_16[1].d
    
    if (rax_13 != 0)
        rcx_16[1].d = rax_13 + 1
        rax_13.b = 1
    
    if (rax_13.b == 0)
        rcx_16 = nullptr
    
    if (rcx_16 != 0)
        rdx_9 = arg1[1]

var_88.q = rdx_9
int32_t* result
int32_t zmm0_5
result, zmm0_5 = sub_140db7a20(&arg1[0x96], &var_88, 0, zx.o(0), zmm0_4.q, 1)

if (rcx_16 != 0)
    rcx_16[1].d -= 1
    
    if (rcx_16[1].d == 1)
        result = (**rcx_16)(rcx_16)
        int32_t temp3_1 = *(rcx_16 + 0xc)
        *(rcx_16 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rcx_16 + 8))(rcx_16, 1)

if (arg1[0x7c].d != 0)
    int64_t* rcx_20 = arg1[0x7b]
    
    if (rcx_20 != 0)
        result = (*(*rcx_20 + 0x28))(rcx_20)
        
        if (result.b != 0)
            if (arg1[0x7c].d != 0)
                rsi = arg1[0x7b]
            
            result = (*(*rsi + 0x48))(rsi)
            arg1[0x7a].d = zmm0_5

if (not(9.99999975e-05f f>= arg1[0x7a].d) && arg2 != 0 && arg1[0xb4].d == 0xffffffff)
    result = sub_140e6af50(data_143e29f28)
    
    if (result.b == 0)
        void arg_8
        result = sub_140d9f590(sub_140da2c00(), &arg_8)
        arg1[0xb4].d = *result

return result
