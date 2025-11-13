// 函数: sub_1427b2fd0
// 地址: 0x1427b2fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140cde0b0()
sub_140d19010(rax, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* rax_2 = sub_140d2dfc0(sub_1427ba720(), rax, 0, 0, 0, 0, 0, 0, 0)
int64_t r9 = *arg1
(*(r9 + 0x270))(arg1, &data_143f88a90, rax_2, r9)
void* rax_3 = sub_140cde0b0()
sub_140d19010(rax_3, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* rax_5 = sub_140d2dfc0(sub_1427bf7b0(), rax_3, 0, 0, 0, 0, 0, 0, 0)
int64_t r9_1 = *arg1
(*(r9_1 + 0x270))(arg1, &data_143f88aa0, rax_5, r9_1)
void* rax_6 = sub_140cde0b0()
sub_140d19010(rax_6, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* rax_8 = sub_140d2dfc0(sub_1427ba1c0(), rax_6, 0, 0, 0, 0, 0, 0, 0)
int64_t r9_2 = *arg1
(*(r9_2 + 0x270))(arg1, &data_143f88ab0, rax_8, r9_2)
void* rax_9 = sub_140cde0b0()
sub_140d19010(rax_9, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* rax_11 = sub_140d2dfc0(sub_1427c06c0(), rax_9, 0, 0, 0, 0, 0, 0, 0)
int64_t r9_3 = *arg1
(*(r9_3 + 0x270))(arg1, &data_143f88ac0, rax_11, r9_3)
void* rax_12 = sub_140cde0b0()
sub_140d19010(rax_12, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
arg1[0x16] = sub_140d2dfc0(sub_1427c06c0(), rax_12, 0, 0, 0, 0, 0, 0, 0)
void*** rax_15 = j_sub_140a82f30(0x20)

if (rax_15 == 0)
    rax_15 = nullptr
else
    rax_15[1].d = 1
    *rax_15 = &data_1432ad958
    *(rax_15 + 0xc) = 1
    rax_15[3] = 0
    rax_15[2] = &data_1434b71b8
    rax_15[3].d = 0x1fffe

if (rax_15 != 0)
    rax_15[1].d += 1

void** rax_17 = arg1[0x16] + 0x28
void var_28

if (rax_17 == &var_28)
label_1427b3271:
    
    if (rax_15 != 0)
        rax_15[1].d -= 1
        
        if (rax_15[1].d == 1)
            (**rax_15)(rax_15)
            int32_t temp2_1 = *(rax_15 + 0xc)
            *(rax_15 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rax_15)[1](rax_15, 1)
else
    *rax_17 = &rax_15[2]
    void*** rdi_1 = rax_17[1]
    
    if (rax_15 == rdi_1)
        goto label_1427b3271
    
    rax_17[1] = rax_15
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

if (rax_15 != 0)
    rax_15[1].d -= 1
    
    if (rax_15[1].d == 1)
        (**rax_15)(rax_15)
        int32_t temp4_1 = *(rax_15 + 0xc)
        *(rax_15 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rax_15)[1](rax_15, 1)

(*(*arg1 + 0x270))(arg1, &data_143f88ad0, arg1[0x16])
void* rax_24 = sub_140cde0b0()
sub_140d19010(rax_24, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
arg_8 = 0
void* rax_26 = sub_140d2dfc0(sub_1427c0850(), rax_24, 0, 0, 0, 0, 0, 0, 0)
int64_t r9_4 = *arg1
int64_t result = (*(r9_4 + 0x270))(arg1, &data_143f88a20, rax_26, r9_4)
arg1[0x15].b = 1
return result
