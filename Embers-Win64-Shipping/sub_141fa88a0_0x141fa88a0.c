// 函数: sub_141fa88a0
// 地址: 0x141fa88a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140b212b0(arg2, 0x10, 0)
int32_t r8 = arg1[1].d
int64_t r10 = sx.q(rax)
int32_t arg_18 = r10.d

if (r8 != *(arg1 + 0x34))
    void* rdx = arg1[8]
    void* r9_1 = &arg1[7]
    
    if (rdx != 0)
        r9_1 = rdx
    
    int32_t i_1 = *(r9_1 + (((sx.q(arg1[9].d) - 1) & r10) << 2))
    int32_t i = i_1
    
    if (i_1 != 0xffffffff)
        int64_t r9_2 = *arg1
        
        do
            int64_t r8_4 = sx.q(i) * 3
            
            if (*(r9_2 + (r8_4 << 3)) == r10.d)
                if (i == 0xffffffff)
                    break
                
                void* const rcx_8
                
                if (i_1 == 0xffffffff)
                label_141fa8a20:
                    rcx_8 = nullptr
                else
                    while (true)
                        int64_t rdx_5 = sx.q(i_1) * 3
                        rcx_8 = r9_2 + (rdx_5 << 3)
                        
                        if (*(r9_2 + (rdx_5 << 3)) == r10.d)
                            break
                        
                        i_1 = *(rcx_8 + 0x10)
                        
                        if (i_1 == 0xffffffff)
                            goto label_141fa8a20_1
                    
                    if (i_1 == 0xffffffff)
                    label_141fa8a20_1:
                        rcx_8 = nullptr
                
                void* rax_8 = rcx_8 + 8
                
                if (rcx_8 == 0)
                    rax_8 = nullptr
                
                return *rax_8
            
            i = *(r9_2 + (r8_4 << 3) + 0x10)
        while (i != 0xffffffff)

char rax_1

if (arg1[0xb].b != 0)
    rax_1 = sub_140d3e110(&arg1[0xa])

char arg_8
void*** r8_6
int32_t var_48
void arg_20

if (arg1[0xb].b == 0 || rax_1 == 0)
    arg_8 = 0
    char* var_30_1 = &arg_8
    void*** (* var_38)() = j_sub_140597fc0
    void*** rax_11 = sub_14081d830(0x1b0, sub_140a756e0(&var_38, &data_143958018) + 0x10, 1, 0)
    
    if (rax_11 == 0)
        r8_6 = nullptr
    else
        int32_t var_44_1 = 0
        var_48 = *sub_140b5e500(&arg_20, 0x3e)
        int64_t* rcx_13 = *(data_143f5b298 + 0x388)
        int64_t rdx_7 = *rcx_13
        r8_6 = sub_141fa48f0(rax_11, (*(rdx_7 + 0x280))(rcx_13, rdx_7, 0), arg2, var_48.q)
else
    char* var_40_1 = &arg_8
    arg_8 = 0
    var_48.q = j_sub_140597fc0
    void*** rax_3 = sub_14081d830(0x1b0, sub_140a756e0(&var_48, &data_143958018) + 0x10, 1, 0)
    
    if (rax_3 == 0)
        r8_6 = nullptr
    else
        int64_t* rax_4 = sub_140d3c6e0(&arg1[0xa])
        int64_t* rax_5 = sub_140b58170(&arg_20, "GizmoColor", 1)
        int64_t rdx_3 = *rax_4
        r8_6 = sub_141fa48f0(rax_3, (*(rdx_3 + 0x280))(rax_4, rdx_3), arg2, *rax_5)
arg_8.q = r8_6
sub_140bd26e0(arg1, &arg_18, &arg_8)
return arg_8.q
