// 函数: sub_1427b6a30
// 地址: 0x1427b6a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427b6e20(arg1)
uint64_t rax = sub_140d3c6e0(&arg1[0x31])
uint64_t rdi = rax

if (rax != 0)
label_1427b6ac5:
    void* rax_4 = sub_140bdf2e0()
    void* rdx_2 = *(rdi + 0x10)
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
        rdi = 0
    else
        void* rax_7 = sub_1427bb630()
        
        if (rax_7 == 0)
            rdi = 0
        else
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s> *(rdi + 0x38) || *(*(rdi + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                rdi = 0
else if (arg1[0x33] == 0)
    rdi = 0
else
    if (rax.d == data_1439aaa30)
        data_1439aaa30 = 0
    else
        rax = zx.q(data_1439aaa30)
    
    if (rax.d != arg1[0x32].d || arg1[0x31].d != 0xffffffff)
        void* rax_1 = sub_140d2bce0(&arg1[0x33])
        sub_140d3a3a0(&arg1[0x31], rax_1)
        
        if (rax_1 != 0 || data_143e1d7b4 == 0)
            int32_t rax_2 = 0
            
            if (0 == data_1439aaa30)
                data_1439aaa30 = 0
            else
                rax_2 = data_1439aaa30
            
            arg1[0x32].d = rax_2
        
        uint64_t rax_3 = sub_140d3c6e0(&arg1[0x31])
        rdi = rax_3
        
        if (rax_3 != 0)
            goto label_1427b6ac5
        
        rdi = 0
    else
        rdi = 0

void arg_8
uint64_t rbx_2 = *sub_140b58260(&arg_8, u"Brush", 1)
uint32_t rcx_9
rcx_9.b = (rbx_2 u>> 0x20).d == 0

if ((rcx_9.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
    sub_140d19010(arg1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")

void* rax_12
double zmm0
rax_12, zmm0 = sub_140d2dfc0(rdi, arg1, rbx_2, 0, 0, 0, 0, 0, 0)
arg1[0x18] = rax_12
(*(*arg1 + 0x398))(arg1)
double zmm1 = zmm0 * 0.01
zmm0.d = fconvert.s(zmm0)
arg1[0x2f].d = zmm0.d
*(arg1 + 0x174) = fconvert.s(zmm1)
sub_1427b2430(arg1)
(*(*arg1 + 0x2b8))(arg1, arg1[0x18])
jump(*(*arg1 + 0x3a0))
