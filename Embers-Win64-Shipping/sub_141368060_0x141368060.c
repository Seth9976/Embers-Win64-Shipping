// 函数: sub_141368060
// 地址: 0x141368060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2
int64_t r15 = *(arg2[8] + 0x1a0)
int128_t var_58 = data_142d3f660
int128_t var_38 = zx.o(0)
int64_t* var_48 = nullptr
void* rax = *(rcx + 0x10)
void* var_40 = rax

if (rax != 0)
    *(rax + 8) += 1
    rcx = *arg2
    arg2[8]

*(rcx + 0x1548)
int64_t* arg_20
int64_t* rax_1 = sub_14137b650(&arg_20)

if (&var_48 != rax_1)
    int64_t* rbx_1 = var_48
    var_48 = *rax_1
    *rax_1 = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_3
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_3 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_1)

int64_t* rbx_2 = arg_20

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        char rax_6
        
        if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
            rax_6 = sub_1405949a0()
        
        if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_6 != 0))
            (**rbx_2)(rbx_2, 1)
        else
            bool z_2
            
            if (0 == *(rbx_2 + 0xc))
                *(rbx_2 + 0xc) = 1
                z_2 = true
            else
                *(rbx_2 + 0xc)
                z_2 = false
            
            if (z_2)
                sub_1405dcc10(&data_143f02390, rbx_2)

void* rax_9 = *arg2
var_58.d = *(rax_9 + 0x50b0)
var_58:4.d = *(rax_9 + 0x50b4)
var_58:8.d = *(rax_9 + 0x50b8)
var_38.q = arg4
var_38:8.q = data_14395f4d0
var_58:0xc.d = *(rax_9 + 0x126c) * 0.5f
sub_1413433d0(arg2[8], arg3, r15, &var_58)
sub_1405d1550(&var_40)
return sub_1405d1550(&var_48)
