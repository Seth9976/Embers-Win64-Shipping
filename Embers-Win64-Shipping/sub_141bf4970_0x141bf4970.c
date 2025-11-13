// 函数: sub_141bf4970
// 地址: 0x141bf4970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = *arg2
void* rax_1 = arg2[1]
void* var_10 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t r9
r9.b = 2
sub_141bf4ad0(arg1, &var_18, arg1 + 0x28, r9)
var_18 = *arg2
void* rax_3 = arg2[1]
void* var_10_1 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t r9_1
r9_1.b = 3
sub_141bf4ad0(arg1, &var_18, arg1 + 0x4c, r9_1)
var_18 = *arg2
void* rax_5 = arg2[1]
void* var_10_2 = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

sub_141bf4ad0(arg1, &var_18, arg1 + 0x70, 0)
var_18 = *arg2
void* rax_7 = arg2[1]
void* var_10_3 = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

int64_t r9_2
r9_2.b = 1
sub_141bf4ad0(arg1, &var_18, arg1 + 0x94, r9_2)
var_18 = *arg2
void* rax_9 = arg2[1]
void* var_10_4 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

int64_t r9_3
r9_3.b = 4
sub_141bf4ad0(arg1, &var_18, arg1 + 0xb8, r9_3)
var_18 = *arg2
void* rax_11 = arg2[1]
void* var_10_5 = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

int64_t r9_4
r9_4.b = 5
uint64_t result = sub_141bf4ad0(arg1, &var_18, arg1 + 0xdc, r9_4)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
