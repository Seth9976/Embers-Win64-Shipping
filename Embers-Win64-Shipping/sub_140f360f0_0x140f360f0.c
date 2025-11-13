// 函数: sub_140f360f0
// 地址: 0x140f360f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x60)

if (rax != 0)
    rax = sub_140f205d0(rax, arg1)

sub_140f29a50(arg1 + 0x378, rax)
void*** rax_1 = j_sub_140a82f30(0x60)

if (rax_1 != 0)
    rax_1 = sub_140f205d0(rax_1, arg1)

sub_140f29a50(arg1 + 0x378, rax_1)
int64_t* rax_2 = *(arg1 + 0x388)
int128_t zmm0 = *(arg2 + 0x1b0)
char var_28 = 1
int64_t var_20 = 0
void* rbx = *rax_2
int128_t var_38 = zmm0
int32_t var_18 = 0
*(rbx + 0x48) = 1
*(rbx + 0x38) = zmm0
sub_140692f90(rbx + 0x50, &var_20)
sub_140745b20(&var_20)
sub_140de1b90(rbx + 0x10, arg2 + 0x1a0)
int64_t* rbx_1 = *(arg2 + 0x1c8)
int64_t var_48 = *(arg2 + 0x1c0)

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_48 != arg1 + 0x2e0)
    var_48.o = *(arg1 + 0x2e0)
    *(arg1 + 0x2e0) = var_48.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = *(arg2 + 0x1c8)
var_48 = *(arg2 + 0x1c0)

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_48 != arg1 + 0x2f0)
    var_48.o = *(arg1 + 0x2f0)
    *(arg1 + 0x2f0) = var_48.o

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

sub_1407473e0(arg1 + 0x300, arg2 + 0x1d0)
sub_1407473e0(arg1 + 0x310, arg2 + 0x1e0)
*(arg1 + 0x320) = *(arg2 + 0x1f0)
*(arg1 + 0x324) = *(arg2 + 0x1f4)
sub_1407473e0(arg1 + 0x328, arg2 + 0x1f8)
*(arg1 + 0x338) = *(arg2 + 0x208)

if (arg2 + 0x209 != arg1 + 0x33b)
    if (*(arg1 + 0x33c) != 0)
        *(arg1 + 0x33c) = 0
    
    if (*(arg2 + 0x20a) != 0)
        *(arg1 + 0x33b) = *(arg2 + 0x209)
        *(arg1 + 0x33c) = 1

*(arg1 + 0x360) = *(arg2 + 0x20b)
*(arg1 + 0x361) = *(arg2 + 0x20c)
*(arg1 + 0x33a) = *(arg2 + 0x20d)
char result = *(arg2 + 0x20e)
*(arg1 + 0x362) = result
return result
