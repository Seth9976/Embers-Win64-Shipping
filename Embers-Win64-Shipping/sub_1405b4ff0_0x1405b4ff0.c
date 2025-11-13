// 函数: sub_1405b4ff0
// 地址: 0x1405b4ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x20)
int32_t r14 = arg3:4.d
void* result = nullptr
uint64_t var_78 = arg3
int32_t* rdx_2

if (rax == *(arg1 + 0x4c))
label_1405b5098:
    rdx_2 = nullptr
else
    void* rdi_1 = *(arg1 + 0x58)
    void* rsi_1 = arg1 + 0x50
    int64_t rcx_1 = sx.q(sub_1405be660(&var_78))
    
    if (rdi_1 != 0)
        rsi_1 = rdi_1
    
    int32_t rax_4 = *(rsi_1 + ((rcx_1 & (sx.q(*(arg1 + 0x60)) - 1)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_1405b5098_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_4) << 5) + *(arg1 + 0x18)
            
            if (*rdx_2 == arg3.d && rdx_2[1] == r14 && rdx_2[2] == arg4)
                break
            
            rax_4 = rdx_2[6]
            
            if (rax_4 == 0xffffffff)
                goto label_1405b5098_2
        
        if (rax_4 == 0xffffffff)
        label_1405b5098_2:
            rdx_2 = nullptr

void* r8_1 = &rdx_2[4]

if (rdx_2 == 0)
    r8_1 = nullptr

if (r8_1 == 0)
    if (arg3.d s<= 0 || r14 s<= 0)
        return nullptr
    
    int32_t rcx_18 = *data_143cd5f70
    
    if (rcx_18 s> 0 && *(arg1 + 0x70) - *(arg1 + 0x9c) - *(arg1 + 0x4c) + *(arg1 + 0x20) s>= rcx_18)
        return nullptr
    
    void* rax_13
    
    if (sub_140d3e110(arg1 + 0x10) == 0)
        rax_13 = sub_140cde0b0()
    else
        rax_13 = sub_140d3c6e0(arg1 + 0x10)
    
    sub_140d19010(rax_13, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    void* result_1 = sub_140d2dfc0(sub_1425b6f00(), rax_13, 0, 0, 0, 0, 0, 0, 0)
    *(result_1 + 0xdb) = arg4.b
    sub_1423c21c0(result_1, zx.q(arg3.d), zx.q(r14))
    int64_t rdx_8
    rdx_8.b = 1
    sub_1423cc130(result_1, rdx_8)
    result = result_1
else
    int32_t rdx_3 = *data_143cd5f70
    
    if (rdx_3 s> 0 && *(arg1 + 0x70) - *(arg1 + 0x9c) s>= rdx_3)
        return nullptr
    
    void* result_2 = *r8_1
    result = result_2
    sub_1405b65d0(arg1 + 0x18, *(arg1 + 0x20) - *(arg1 + 0x4c), 0)
    int64_t rsi_2 = sx.q(*(arg1 + 0x60))
    
    if (rsi_2.d != 0)
        void* rbx_1 = *(arg1 + 0x58)
        void* rdi_2 = arg1 + 0x50
        int32_t rax_5 = sub_1405be660(&var_78)
        int32_t r10_1 = var_78:4.d
        int32_t r11_1 = var_78.d
        
        if (rbx_1 != 0)
            rdi_2 = rbx_1
        
        int32_t i = *(rdi_2 + ((sx.q(rax_5) & (rsi_2 - 1)) << 2))
        int32_t i_1 = i
        
        while (i != 0xffffffff)
            int32_t* rcx_12 = (sx.q(i_1) << 5) + *(arg1 + 0x18)
            i = rcx_12[6]
            
            if (*rcx_12 == r11_1 && rcx_12[1] == r10_1 && rcx_12[2] == arg4)
                break
            
            i_1 = i
        
        if (i_1 != 0xffffffff)
            int64_t r8_3 = *(arg1 + 0x18)
            
            do
                if (*((sx.q(i_1) << 5) + r8_3 + 0x10) == result_2)
                    sub_1405c3390(arg1 + 0x18, i_1)
                    break
                
                i_1 = i
                
                if (i == 0xffffffff)
                    break
                
                do
                    int64_t rcx_16 = sx.q(i_1) << 5
                    i = *(rcx_16 + r8_3 + 0x18)
                    
                    if (*(rcx_16 + r8_3) == r11_1 && *(rcx_16 + r8_3 + 4) == r10_1
                            && *(rcx_16 + r8_3 + 8) == arg4)
                        break
                    
                    i_1 = i
                while (i != 0xffffffff)
            while (i_1 != 0xffffffff)

if (result != 0)
    void var_68
    sub_140d3a3a0(&var_68, arg2)
    int32_t var_60_1 = arg5
    int64_t* var_58 = &result
    void* var_50_1 = &var_68
    int32_t arg_20
    sub_1405a7ca0(arg1 + 0x68, &arg_20, &var_58, nullptr)

return result
