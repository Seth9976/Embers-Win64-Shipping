// 函数: sub_141e43910
// 地址: 0x141e43910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e464f0(arg1 + 0x58, arg1, 0)
int32_t var_38 = 0xffffffff
int64_t var_48 = 0
int32_t var_40 = 0
sub_140d3cc80(sub_14258cb80(), &var_48, 1, 0x10, 0)
int32_t r8_1 = var_40
int32_t i = var_38 + 1
int64_t r9 = var_48
int32_t i_4 = i

if (i s< r8_1)
    while (*(r9 + (sx.q(i) << 3)) == 0)
        int32_t i_6 = i + 1
        i_4 = i_6
        i = i_6
        
        if (i_6 s>= r8_1)
            break

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    void* rbx_1 = *(r9 + (sx.q(i) << 3))
    
    if (*(rbx_1 + 0x60) == arg1)
        sub_141e464f0(rbx_1 + 0x188, arg1, 0)
        int64_t arg_8
        sub_140d3a3a0(&arg_8, rbx_1)
        sub_141e47700(arg1 + 0x308, arg_8)
        sub_141e3b870(arg1, rbx_1)
        i = i_4
        r8_1 = var_40
        r9 = var_48
    
    int32_t i_7 = i + 1
    i_4 = i_7
    i = i_7
    
    if (i_7 s< r8_1)
        while (*(r9 + (sx.q(i) << 3)) == 0)
            int32_t i_8 = i + 1
            i_4 = i_8
            i = i_8
            
            if (i_8 s>= r8_1)
                break

if (r9 != 0)
    sub_140a74f90(r9)

void* rax_4 = sub_141e5f5c0(arg1 + 0x1f0, &data_143f398c8)

if (rax_4 != 0)
    sub_141e63ae0(rax_4, arg1)

var_48 = 0
int32_t i_3 = 0
int32_t var_38_1 = 0xffffffff
void* result = sub_140d3cc80(sub_1425974e0(), &var_48, 1, 0x10, 0)
int32_t i_1 = i_3
int32_t i_2 = var_38_1 + 1
int64_t r8_3 = var_48
int32_t i_5 = i_2

if (i_2 s< i_1)
    do
        result = sx.q(i_2)
        
        if (*(r8_3 + (result << 3)) != 0)
            break
        
        result = zx.q(i_2 + 1)
        i_5 = result.d
        i_2 = result.d
    while (result.d s< i_1)

while (i_2 s>= 0)
    if (i_2 s>= i_1)
        break
    
    int64_t* rbx_2 = *(r8_3 + (sx.q(i_2) << 3))
    
    if (rbx_2 != 0)
        void* rax_7 = rbx_2[0x86]
        
        if (rax_7 != 0 && *(rax_7 + 0x60) == arg1)
            if (sub_140d23dc0(rbx_2, 0x30) == 0)
                int64_t var_30_1 = 0
                int32_t var_28 = 0xffffffff
                int32_t var_24_1 = 0
                void var_20
                sub_140d3a3a0(&var_20, nullptr)
                int64_t* rdx_8 = nullptr
                int64_t* var_30_2 = nullptr
                void* const rdi_1 = nullptr
                
                if ((rbx_2[0x11].b & 1) != 0)
                    void* rax_10
                    
                    if (rbx_2[0x15] == 0)
                        rax_10 = sub_141ee69e0(rbx_2)
                        rdx_8 = var_30_2
                    
                    if (rbx_2[0x15] != 0 || rax_10 != 0)
                        if ((rbx_2[0x11].b & 2) != 0)
                            sub_141efe1c0(rbx_2, rdx_8)
                        
                        rdi_1 = rbx_2[0x15]
                        
                        if (rdi_1 == 0)
                            rdi_1 = sub_141ee69e0(rbx_2)
                        
                        void* const var_68_1 = rdi_1
                        char var_60_1 = 1
                        char var_5f = (var_5f & 0xfd) | 1
                        sub_141ee0b60(rbx_2)
                        rbx_2[0x15] = 0
                
                sub_140d3a3a0(&var_20, rdi_1)
                int64_t* rdx_10 = nullptr
                
                if (sub_140d3e110(&var_20) != 0)
                    rdx_10 = rbx_2
                
                sub_140d3a3a0(&var_28, rdx_10)
                
                if (sub_140d3e110(&var_28) != 0)
                    int64_t rax_14 = sub_140d3c6e0(&var_20)
                    int64_t* rax_15 = sub_140d3c6e0(&var_28)
                    int32_t rcx_25 = *(rax_15 + 0xc)
                    void* const rax_18
                    
                    if (rcx_25 s>= data_143e1d9b4)
                        rax_18 = nullptr
                    else
                        uint32_t rdx_11 = zx.d(rcx_25.w)
                        
                        if (rcx_25 s< 0)
                            rcx_25 += 0xffff
                            rdx_11 -= 0x10000
                        
                        rax_18 =
                            *(data_143e1d9a0 + (sx.q(rcx_25 s>> 0x10) << 3)) + sx.q(rdx_11) * 0x18
                    
                    if (((*(rax_18 + 8) u>> 0x1d).b & 1) == 0)
                        if ((rax_15[0x11].b & 1) != 0)
                            sub_141ee0b60(rax_15)
                        
                        rax_15[0x15] = rax_14
                        int64_t var_58_1 = rax_14
                        char var_4f = (var_4f & 0xfd) | 1
                        char var_50_1 = 1
                        sub_141ee0740(rax_15, 0)
                        sub_141efe1c0(rax_15, var_30_2)
            
            r8_3 = var_48
            i_1 = i_3
            i_2 = i_5
    
    result = zx.q(i_2 + 1)
    i_5 = result.d
    i_2 = result.d
    
    if (result.d s< i_1)
        do
            result = sx.q(i_2)
            
            if (*(r8_3 + (result << 3)) != 0)
                break
            
            result = zx.q(i_2 + 1)
            i_5 = result.d
            i_2 = result.d
        while (result.d s< i_1)

if (r8_3 == 0)
    return result

return sub_140a74f90(r8_3)
