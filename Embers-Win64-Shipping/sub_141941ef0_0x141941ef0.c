// 函数: sub_141941ef0
// 地址: 0x141941ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int64_t* rbx = arg2
void* var_90

if (arg2 != 0)
    (*(*arg2 + 0x48))(rbx)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* rax_3
    rax_3, arg2 = (*(*rbx + 0x48))(rbx)
    var_90 = rax_3
else
    var_90 = nullptr

void* var_88

if (arg3 != 0)
    (*(*arg3 + 0x48))(arg3)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* rax_6
    rax_6, arg2 = (*(*arg3 + 0x48))(arg3)
    var_88 = rax_6
else
    var_88 = nullptr

int32_t rsi_1 = *arg4
int32_t var_68
int32_t rax_8
int32_t rbx_1
int32_t rbp_1
void* r10

if (rsi_1 != data_143dbb188 || arg4[1] != data_143dbb18c || arg4[2] != data_143dbb190)
    r10 = var_90
    rbp_1 = arg4[1]
    rax_8 = *(r10 + 0x14)
    
    if (rax_8 == 0x806f)
        rbx_1 = arg4[2]
    else if (rax_8 == 0x8513)
        rbx_1 = arg4[0xb]
    else
        rbx_1 = 1
else
    (*(*rbx + 0x30))(rbx, &var_68)
    char rcx_7 = (arg4[0xc]).b
    r10 = var_90
    rsi_1 = var_68 s>> rcx_7
    rax_8 = *(r10 + 0x14)
    
    if (rsi_1 s<= 1)
        rsi_1 = 1
    
    int32_t var_64
    rbp_1 = var_64 s>> rcx_7
    
    if (rbp_1 s<= 1)
        rbp_1 = 1
    
    if (rax_8 == 0x806f)
        int32_t var_60
        rbx_1 = var_60 s>> rcx_7
        
        if (rbx_1 s<= 1)
            rbx_1 = 1
    else
        rbx_1 = 6
        
        if (rax_8 != 0x8513)
            rbx_1 = 1

int32_t r14 = arg4[0xd]
int32_t arg_10 = arg4[0xc]
int32_t arg_20 = r14
uint64_t result

if (data_143efbce2 == 0)
    int32_t rax_13 = arg4[8]
    arg2.b = 1
    int32_t r14_1 = arg4[6]
    int32_t r12_1 = arg4[7]
    int32_t r15_1 = arg4[3]
    int32_t r13 = arg4[4]
    var_68.q = arg1 - 0x18
    void* result_2 = sub_14190d690(arg1 - 0x18, arg2.b)
    uint64_t result_3 = result_2
    int32_t r8_4 = data_1439c7498 - 1
    uint64_t result_1 = result_2
    int32_t r9_1 = *(var_88 + 0x14)
    int32_t r10_1 = *(var_88 + 0x10)
    int64_t rdx_3 = sx.q(r8_4) * 5
    int64_t rcx_12 = *(result_3 + 8)
    int32_t var_f0
    int32_t var_e8
    
    if (*(rcx_12 + (rdx_3 << 3) + 0x10) != r9_1 || *(rcx_12 + (rdx_3 << 3) + 0x14) != r10_1)
        var_e8 = *(arg3 + 0x34)
        var_f0 = 0
        sub_14190a090(arg1 - 0x18, result_3, r8_4, r9_1, r10_1, 0)
        result_3 = result_1
    
    if (*(result_3 + 0x428) != 0)
        data_143effcd8(0x88ec, 0)
        *(result_1 + 0x428) = 0
    
    int32_t i = 0
    int64_t* arg_18
    arg_18.d = 0
    
    if (arg4[0xb] u> 0)
        int32_t rbx_5 = arg_20
        int32_t rax_19 = arg_10 - rbx_5
        arg_10 = rax_19
        
        do
            int32_t var_98_1 = 0
            
            if (arg4[0xe] u> 0)
                bool cond:8_1
                
                do
                    int32_t rcx_14 = i + arg4[9]
                    void* var_58 = var_90
                    int32_t var_80 = rax_19 + rbx_5
                    int32_t var_7c = rcx_14
                    var_f0.q = 0
                    int32_t var_f8
                    var_f8.q = &var_80
                    data_143f000f8(0x8d40, 
                        zx.q(sub_14193c970(var_68.q, 1, &var_58, &var_7c, var_f8, nullptr)))
                    data_143effae0(0x8ce0)
                    int32_t r10_2 = *(var_88 + 0x14)
                    int32_t var_e0
                    int32_t var_d8
                    
                    if (r10_2 u> 0x84f5)
                        if (r10_2 == 0x8513)
                            int32_t rbx_6 = 6
                            
                            if (arg4[0xb] s<= 6)
                                rbx_6 = arg4[0xb]
                            
                            int32_t rbx_7 = rbx_6 - 1
                            
                            if (rbx_6 - 1 s>= 0)
                                int32_t temp8_1
                                
                                do
                                    var_e0 = rbp_1
                                    var_e8 = rsi_1
                                    data_143eff9b8(zx.q(rbx_7 + 0x8515), zx.q(arg4[0xd]), 
                                        zx.q(r14_1), zx.q(r12_1), r15_1, r13, var_e8, var_e0, 
                                        var_d8)
                                    temp8_1 = rbx_7
                                    rbx_7 -= 1
                                while (temp8_1 - 1 s>= 0)
                            
                            rbx_5 = arg_20
                        else if (r10_2 == 0x8c18)
                            var_e0 = 1
                            var_e8 = rsi_1
                            var_f0 = 0
                            data_143eff9b8(zx.q(r10_2), zx.q(rbx_5), zx.q(r14_1), 
                                zx.q(arg_18.d + arg4[0xa]), r15_1, 0, var_e8, 1, var_d8)
                        else if (r10_2 == 0x8c1a)
                            var_d8 = rbp_1
                            var_e0 = rsi_1
                            var_e8 = r13
                            data_143effc10(zx.q(r10_2), zx.q(rbx_5), zx.q(r14_1), zx.q(r12_1), 
                                arg_18.d + arg4[0xa], r15_1, var_e8, var_e0, var_d8)
                    else if (r10_2 == 0x84f5)
                    label_14194238c:
                        var_e0 = rbp_1
                        var_e8 = rsi_1
                        data_143eff9b8(zx.q(r10_2), zx.q(rbx_5), zx.q(r14_1), zx.q(r12_1), r15_1, 
                            r13, var_e8, var_e0, var_d8)
                    else if (r10_2 == 0xde0)
                        var_f8 = 0
                        data_143eff9b0(zx.q(r10_2), zx.q(rbx_5), zx.q(r14_1), zx.q(r15_1), 0, 
                            rsi_1, var_e8, var_e0, var_d8)
                    else
                        if (r10_2 == 0xde1)
                            goto label_14194238c
                        
                        if (r10_2 == 0x806f)
                            var_d8 = rbp_1
                            var_e0 = rsi_1
                            var_e8 = r13
                            data_143effc10(zx.q(r10_2), zx.q(rbx_5), zx.q(r14_1), zx.q(r12_1), 
                                rax_13, r15_1, var_e8, var_e0, var_d8)
                    i = arg_18.d
                    cond:8_1 = var_98_1 + 1 u< arg4[0xe]
                    var_98_1 += 1
                    rax_19 = arg_10
                while (cond:8_1)
            
            rbx_5 += 1
            rsi_1 s>>= 1
            arg_20 = rbx_5
            
            if (rsi_1 s<= 1)
                rsi_1 = 1
            
            rbp_1 s>>= 1
            
            if (rbp_1 s<= 1)
                rbp_1 = 1
            
            i += 1
            arg_18.d = i
        while (i u< arg4[0xb])
    
    result = result_1
    *(result + 0x188) = 0xffffffff
else
    result = zx.q(rax_8 - 0x806f)
    int32_t temp1_1
    
    if (rax_8 != 0x806f)
        temp1_1 = result.d
        result = zx.q(result.d - 0x4a4)
    
    int32_t r12
    int32_t r15
    
    if (rax_8 == 0x806f || temp1_1 == 0x4a4)
        r15 = arg4[5]
        r12 = arg4[8]
    else
        int32_t temp2_1 = result.d
        result = zx.q(result.d - 0x705)
        
        if (temp2_1 == 0x705 || result.d == 2)
            r15 = arg4[9]
            r12 = arg4[0xa]
            rbx_1 = arg4[0xb]
        else
            r15 = 0
            r12 = 0
    
    if (arg4[0xe] u> 0)
        void* rdx_1 = var_88
        int32_t rcx_8 = *(rdx_1 + 0x14)
        
        do
            data_143f00340(zx.q(*(r10 + 0x10)), zx.q(*(r10 + 0x14)), arg5, zx.q(arg4[3]), arg4[4], 
                r15, *(rdx_1 + 0x10), rcx_8, r14, arg4[6], arg4[7], r12, rsi_1, rbp_1, rbx_1)
            r14 += 1
            rdx_1 = var_88
            rsi_1 s>>= 1
            result = 1
            arg_10 += 1
            rcx_8 = *(rdx_1 + 0x14)
            
            if (rsi_1 s<= 1)
                rsi_1 = 1
            
            rbp_1 s>>= 1
            
            if (rbp_1 s<= 1)
                rbp_1 = 1
            
            if (rcx_8 == 0x806f)
                rbx_1 s>>= 1
                
                if (rbx_1 s<= 1)
                    rbx_1 = 1
            
            r10 = var_90
            i_1 += 1
        while (i_1 u< arg4[0xe])

return result
