// 函数: sub_1427ab770
// 地址: 0x1427ab770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_20 = 0
void* rax_1 = sub_140d2dfc0(sub_1427bbb40(), arg1, 0, 0, 0, 0, 0, 0, 0)
*(arg1 + 0x58) = rax_1
int64_t r8 = *rax_1
(*(r8 + 0x260))(rax_1, arg3, r8)
uint64_t rax_2 = sub_140d3c6e0(arg1 + 0x70)
uint64_t rbx = rax_2

if (rax_2 != 0)
label_1427ab865:
    void* rax_6 = sub_140bdf2e0()
    void* rdx_3 = *(rbx + 0x10)
    int64_t rax_7 = sx.q(*(rax_6 + 0x38))
    
    if (rax_7.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
        rbx = 0
    else
        void* rax_9 = sub_1427bfc60()
        
        if (rax_9 == 0)
            rbx = 0
        else
            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
            
            if (rax_10.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_10 << 3)) != rax_9 + 0x30)
                rbx = 0
else if (*(arg1 + 0x80) == 0)
    rbx = 0
else
    if (rax_2.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax_2 = zx.q(data_1439aaa30)
    
    if (rax_2.d != *(arg1 + 0x78) || *(arg1 + 0x70) != 0xffffffff)
        void* rax_3 = sub_140d2bce0(arg1 + 0x80)
        sub_140d3a3a0(arg1 + 0x70, rax_3)
        
        if (rax_3 != 0 || data_143e1d7b4 == 0)
            int32_t rax_4 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_4 = data_1439aaa30
            
            *(arg1 + 0x78) = rax_4
        
        uint64_t rax_5 = sub_140d3c6e0(arg1 + 0x70)
        rbx = rax_5
        
        if (rax_5 != 0)
            goto label_1427ab865
        
        rbx = 0
    else
        rbx = 0

if ((sub_140b5b8a0(0, 0) & 1) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_13 = sub_140d2dfc0(rbx, arg1, 0, 0, 0, 0, 0, 0, 0)
int64_t r9 = *(arg1 + 0x58)
*(arg1 + 0x60) = rax_13
(*(*rax_13 + 0x260))(rax_13, arg2, arg3, r9)
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t var_38 = 0
void* rax_15 = sub_140d2dfc0(sub_1427bbe80(), arg1, 0, 0, 0, 0, 0, 0, 0)
int64_t r9_1 = *(arg1 + 0x58)
*(arg1 + 0x68) = rax_15
(*(*rax_15 + 0x260))(rax_15, arg2, arg3, r9_1)
jump(*(**(arg1 + 0x68) + 0x2d8))
