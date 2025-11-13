// 函数: sub_14083c3c0
// 地址: 0x14083c3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
void* rbx = *arg3
void* r12 = *(arg5 + 0xc0)

if (rbx != 0)
    int64_t rdx = sx.q(*(rbx + 0x10c))
    int64_t* rdi_1 = *(arg3[1] + 0x10)
    int64_t* rax_2 = rdi_1[3]
    
    if (rax_2[rdx] == 0)
        sub_1419ccf30(rdi_1, rdx.d)
        rax_2 = rdi_1[3]
        rbx = *arg3
    
    rsi = rax_2[rdx]

int64_t* arg_18
sub_14083c300(arg2, rsi, rbx + 0x150, sub_140852320(arg4, &arg_18, 0, 0, 1))
int64_t* rbx_1 = arg_18

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        char rax_5
        
        if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_5 = sub_1405949a0()
        
        if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_5 != 0))
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

int64_t* var_78
sub_14083c300(arg2, rsi, *arg3 + 0x154, sub_140852320(arg4, &var_78, 1, 0, 1))
int64_t* rbx_3 = var_78

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        char rax_10
        
        if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
            rax_10 = sub_1405949a0()
        
        if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
            (**rbx_3)(rbx_3, 1)
        else
            bool z_2
            
            if (0 == *(rbx_3 + 0xc))
                *(rbx_3 + 0xc) = 1
                z_2 = true
            else
                *(rbx_3 + 0xc)
                z_2 = false
            
            if (z_2)
                sub_1405dcc10(&data_143f02390, rbx_3)

int64_t* var_70
sub_14083c300(arg2, rsi, *arg3 + 0x158, sub_140852320(arg4, &var_70, 2, 0, 1))
int64_t* rbx_5 = var_70

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        char rax_15
        
        if (rbx_5[2].b == 0 && data_143f0f1d0 == 0)
            rax_15 = sub_1405949a0()
        
        if (rbx_5[2].b != 0 || (data_143f0f1d0 == 0 && rax_15 != 0))
            (**rbx_5)(rbx_5, 1)
        else
            bool z_3
            
            if (0 == *(rbx_5 + 0xc))
                *(rbx_5 + 0xc) = 1
                z_3 = true
            else
                *(rbx_5 + 0xc)
                z_3 = false
            
            if (z_3)
                sub_1405dcc10(&data_143f02390, rbx_5)

int64_t* var_68
sub_14083c300(arg2, rsi, *arg3 + 0x15c, sub_140852320(arg4, &var_68, 3, arg5, 1))
int64_t* rbx_7 = var_68

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        char rax_20
        
        if (rbx_7[2].b == 0 && data_143f0f1d0 == 0)
            rax_20 = sub_1405949a0()
        
        if (rbx_7[2].b != 0 || (data_143f0f1d0 == 0 && rax_20 != 0))
            (**rbx_7)(rbx_7, 1)
        else
            bool z_4
            
            if (0 == *(rbx_7 + 0xc))
                *(rbx_7 + 0xc) = 1
                z_4 = true
            else
                *(rbx_7 + 0xc)
                z_4 = false
            
            if (z_4)
                sub_1405dcc10(&data_143f02390, rbx_7)

int64_t* var_60
int32_t result = sub_14083c300(arg2, rsi, *arg3 + 0x160, sub_140852320(arg4, &var_60, 4, arg5, 1))
int64_t* rbx_9 = var_60

if (rbx_9 != 0)
    result = rbx_9[1].d
    rbx_9[1].d -= 1
    
    if (result == 1)
        char rax_24
        
        if (rbx_9[2].b == 0 && data_143f0f1d0 == 0)
            rax_24 = sub_1405949a0()
        
        if (rbx_9[2].b != 0 || (data_143f0f1d0 == 0 && rax_24 != 0))
            result = (**rbx_9)(rbx_9, 1)
        else
            result = 0
            bool z_5
            
            if (0 == *(rbx_9 + 0xc))
                *(rbx_9 + 0xc) = 1
                z_5 = true
            else
                result = *(rbx_9 + 0xc)
                z_5 = false
            
            if (z_5)
                result = sub_1405dcc10(&data_143f02390, rbx_9)

if (*(r12 + 0x250) != 0)
    int64_t* var_58
    sub_14083c300(arg2, rsi, *arg3 + 0x152, sub_140852320(arg4, &var_58, 0, 0, 0))
    int64_t* rbx_11 = var_58
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            char rax_28
            
            if (rbx_11[2].b == 0 && data_143f0f1d0 == 0)
                rax_28 = sub_1405949a0()
            
            if (rbx_11[2].b != 0 || (data_143f0f1d0 == 0 && rax_28 != 0))
                (**rbx_11)(rbx_11, 1)
            else
                bool z_6
                
                if (0 == *(rbx_11 + 0xc))
                    *(rbx_11 + 0xc) = 1
                    z_6 = true
                else
                    *(rbx_11 + 0xc)
                    z_6 = false
                
                if (z_6)
                    sub_1405dcc10(&data_143f02390, rbx_11)
    
    int64_t* var_50
    sub_14083c300(arg2, rsi, *arg3 + 0x156, sub_140852320(arg4, &var_50, 1, 0, 0))
    int64_t* rbx_13 = var_50
    
    if (rbx_13 != 0)
        rbx_13[1].d -= 1
        
        if (rbx_13[1].d == 1)
            char rax_33
            
            if (rbx_13[2].b == 0 && data_143f0f1d0 == 0)
                rax_33 = sub_1405949a0()
            
            if (rbx_13[2].b != 0 || (data_143f0f1d0 == 0 && rax_33 != 0))
                (**rbx_13)(rbx_13, 1)
            else
                bool z_7
                
                if (0 == *(rbx_13 + 0xc))
                    *(rbx_13 + 0xc) = 1
                    z_7 = true
                else
                    *(rbx_13 + 0xc)
                    z_7 = false
                
                if (z_7)
                    sub_1405dcc10(&data_143f02390, rbx_13)
    
    int64_t* var_48
    sub_14083c300(arg2, rsi, *arg3 + 0x15a, sub_140852320(arg4, &var_48, 2, 0, 0))
    int64_t* rbx_15 = var_48
    
    if (rbx_15 != 0)
        rbx_15[1].d -= 1
        
        if (rbx_15[1].d == 1)
            char rax_38
            
            if (rbx_15[2].b == 0 && data_143f0f1d0 == 0)
                rax_38 = sub_1405949a0()
            
            if (rbx_15[2].b != 0 || (data_143f0f1d0 == 0 && rax_38 != 0))
                (**rbx_15)(rbx_15, 1)
            else
                bool z_8
                
                if (0 == *(rbx_15 + 0xc))
                    *(rbx_15 + 0xc) = 1
                    z_8 = true
                else
                    *(rbx_15 + 0xc)
                    z_8 = false
                
                if (z_8)
                    sub_1405dcc10(&data_143f02390, rbx_15)
    
    int64_t* var_40
    sub_14083c300(arg2, rsi, *arg3 + 0x15e, sub_140852320(arg4, &var_40, 3, arg5, 0))
    int64_t* rbx_17 = var_40
    
    if (rbx_17 != 0)
        rbx_17[1].d -= 1
        
        if (rbx_17[1].d == 1)
            char rax_43
            
            if (rbx_17[2].b == 0 && data_143f0f1d0 == 0)
                rax_43 = sub_1405949a0()
            
            if (rbx_17[2].b != 0 || (data_143f0f1d0 == 0 && rax_43 != 0))
                (**rbx_17)(rbx_17, 1)
            else
                bool z_9
                
                if (0 == *(rbx_17 + 0xc))
                    *(rbx_17 + 0xc) = 1
                    z_9 = true
                else
                    *(rbx_17 + 0xc)
                    z_9 = false
                
                if (z_9)
                    sub_1405dcc10(&data_143f02390, rbx_17)
    
    int64_t* var_38
    result = sub_14083c300(arg2, rsi, *arg3 + 0x162, sub_140852320(arg4, &var_38, 4, arg5, 0))
    int64_t* rbx_19 = var_38
    
    if (rbx_19 != 0)
        rbx_19[1].d -= 1
        
        if (rbx_19[1].d == 1)
            if (rbx_19[2].b != 0)
                return (**rbx_19)(rbx_19, 1)
            
            if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
                return (**rbx_19)(rbx_19, 1)
            
            result = 0
            bool z_10
            
            if (0 == *(rbx_19 + 0xc))
                *(rbx_19 + 0xc) = 1
                z_10 = true
            else
                result = *(rbx_19 + 0xc)
                z_10 = false
            
            if (z_10)
                return sub_1405dcc10(&data_143f02390, rbx_19)

return result
