// 函数: sub_14214c360
// 地址: 0x14214c360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg5
*(arg1 + 0x58) = arg2

if (rax == 0 || rax s> 0x400)
    rax = 0x400

*(arg1 + 0xa0) = rax
int32_t rax_1 = arg4
*(arg1 + 0x188) = 0
*(arg1 + 0x134) = arg3

if (rax_1 == 0)
    char rax_2 = sub_1424130d0(arg1 + 0xa8, &data_1432ddb18)
    int64_t* rax_3 = sub_14256a150()
    void* rax_4 = rax_3[0x23]
    int32_t rcx_3
    
    if (rax_2 == 0)
        if (rax_4 == 0)
            (*(*rax_3 + 0x390))(rax_3)
            rax_4 = rax_3[0x23]
        
        rcx_3 = *(rax_4 + 0x3c)
    else
        if (rax_4 == 0)
            int64_t rdx = *rax_3
            (*(rdx + 0x390))(rax_3, rdx)
            rax_4 = rax_3[0x23]
        
        rcx_3 = *(rax_4 + 0x40)
    
    if (rcx_3 != 0)
        rax_1 = 0x708
        
        if (rcx_3 s>= 0x708)
            rax_1 = rcx_3
    else
        rax_1 = 0xa28

*(arg1 + 0x38) = rax_1
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* rax_7 = sub_140d2dfc0(sub_14254d5d0(), arg1, 0, 0, 0, 0, 0, 0, 0)
void* rdx_2 = *(arg1 + 0x58)
int64_t var_18 = *(rdx_2 + 0x150)
void* rcx_7 = *(rdx_2 + 0x158)
void* var_10 = rcx_7

if (rcx_7 != 0)
    *(rcx_7 + 8) += 1

void* result = sub_14214d650(rax_7, arg1, &var_18)
*(arg1 + 0x68) = rax_7
return result
