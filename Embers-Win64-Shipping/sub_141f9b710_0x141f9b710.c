// 函数: sub_141f9b710
// 地址: 0x141f9b710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2
void* rcx = *(arg1[5] + 0x58)

if (rcx != 0 && *(rcx + 0x140) != 0 && arg2 != 0)
    sub_141dc9840(arg2)

arg1[0x12].d &= 0xffffffdf
int64_t result = sx.q(*(arg1 + 0x34))
arg1[0xe] = rsi
int64_t* arg_8

if (result.d s>= 0)
    void* rdx = arg1[5]
    int32_t* rcx_2 = result << 2
    result = *(rdx + 0x1340)
    int32_t r8 = *(rcx_2 + result)
    
    if (r8 s> 0)
        void* rcx_3 = rcx_2 + *(rdx + 0x1320)
        int32_t i = *rcx_3
        *rcx_3 = r8 - 1
        void* r8_1 = arg1[5]
        int64_t rdx_1 = sx.q(*(arg1 + 0x34))
        
        while (*(*(r8_1 + 0x1340) + (rdx_1 << 2)) s<= i)
            void** var_138
            int64_t r9_1 = sub_141f79e30(&var_138, arg1, 0)
            char var_10f
            int64_t var_a8
            int64_t var_40
            int64_t var_30
            
            if ((var_10f & 1) != 0)
                sub_140af98a0("Unknown", 0x896, 
                    SetChannelActor failed. Overflow while sending reliable bunch synchronization.", 
                    r9_1)
                sub_140afbb40()
                var_138 = &data_143286b38
                
                if (var_30 != 0)
                    sub_140a74f90(var_30)
                
                if (var_40 != 0)
                    sub_140a74f90(var_40)
                
                if (var_a8 != 0)
                    sub_140a74f90(var_a8)
                
                sub_140b4cb40(&var_138)
                rdx_1 = zx.q(*(arg1 + 0x34))
                r8_1 = arg1[5]
                break
            
            char var_48 = var_48 | 0x20
            (*(*arg1 + 0x2c8))(arg1, &arg_8, &var_138, 0)
            int64_t rdx_4 = sx.q(*(arg1 + 0x34))
            int64_t rcx_6 = *(arg1[5] + 0x1340)
            *(rcx_6 + (rdx_4 << 2)) += 1
            var_138 = &data_143286b38
            
            if (var_30 != 0)
                sub_140a74f90(var_30)
            
            if (var_40 != 0)
                sub_140a74f90(var_40)
            
            if (var_a8 != 0)
                sub_140a74f90(var_a8)
            
            sub_140b4cb40(&var_138)
            r8_1 = arg1[5]
            rdx_1 = sx.q(*(arg1 + 0x34))
        
        *(*(r8_1 + 0x1320) + (sx.q(rdx_1.d) << 2)) = i
        result = arg1[5]
        *(*(result + 0x1340) + (sx.q(*(arg1 + 0x34)) << 2)) = 0
        rsi = arg1[0xe]

if (rsi == 0)
    return result

void* rbx_1 = arg1[5]
arg_8 = arg1
void arg_10
sub_140d3a3a0(&arg_10, rsi)
sub_141f77ce0(rbx_1 + 0x1370, &arg_10, &arg_8)
int64_t* rcx_19 = *(rbx_1 + 0x13c0)

if (rcx_19 != 0)
    (*(*rcx_19 + 0x260))(rcx_19, rsi, arg_8)

if ((arg3 & 1) == 0)
    int64_t* rax_8 = sub_141f881c0(arg1, arg1[0xe], nullptr)
    int64_t* rbx_2 = rax_8[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    void var_148
    
    if (&arg1[0x13] == &var_148)
    label_141f9b9cb:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    else
        arg1[0x13] = *rax_8
        int64_t* rsi_1 = arg1[0x14]
        
        if (rbx_2 == rsi_1)
            goto label_141f9b9cb
        
        arg1[0x14] = rbx_2
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp3_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)

void* r8_5 = arg1[5]
int64_t* rcx_25 = *(r8_5 + 0x58)
sub_14216de20(rcx_25[0xde], arg1[0xe], r8_5, rcx_25)
void* r8_6 = arg1[5]
int64_t* rcx_27 = *(r8_6 + 0x58)
return sub_1421620b0(rcx_27[0xde], arg1[0xe], r8_6, rcx_27)
