// 函数: sub_140823930
// 地址: 0x140823930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int64_t r14 = 0
void* r15 = arg4
void* r9 = arg3
int64_t* r11 = arg2
void* r12 = arg1
int128_t var_98

if (*(arg2 + 0x4f) != 0)
    int64_t* rbx_1 = *(arg3 + 0xc8)
    int32_t rsi_1 = 0
    int64_t rdi_1 = 0
    uint64_t r14_2 = sx.q(*(arg3 + 0xd0)) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg3 + 0xd0))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t* r9_1 = *rbx_1
            int64_t* rax_4 = *arg6 + 0x280
            arg1 = *rax_4
            
            if ((arg1.b & 1) != 0)
                arg1 = (arg1 s>> 1) + rax_4
            
            if (*(arg1 + sx.q(rsi_1) * 0x10 + 8) != 0)
                int64_t var_80_1 = r11[2]
                int64_t rax_8 = *r9_1
                var_98 = *arg6
                int64_t* var_88_1 = r9_1
                void* var_78_1 = r12
                (*(rax_8 + 0x28))(r9_1, r15, &var_98)
                r11 = arg2
            
            rsi_1 += 1
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != r14_2)
        
        r9 = arg3
    
    r14 = 0

bool cond:0 = r11[9].d u<= 0
void* r10 = *(r9 + 0xc0)
void* var_a8 = r10
int64_t var_a0 = 0
char var_b7 = 0

if (cond:0)
    sub_14083fc00(r12, r15, arg6, r9, 0, &var_a0, &var_b7)
    char var_c0_2 = 0
    int64_t var_c8_2 = 0
    int32_t var_d0_2 = 0
    int32_t var_d8_2 = 0
    void* rcx_32 = arg3 + 0xe0
    void* rax_44 = *(rcx_32 + 0x20)
    
    if (rax_44 != 0)
        rcx_32 = rax_44
    
    return sub_14083ae90(r12, arg2, arg3, 0, *(*(rcx_32 + 8) + 0xb0), arg6, r15, arg5, arg3, 0)

uint64_t result = zx.q(*(r10 + 0x1f8))
arg1.b = 0
int32_t rdx_1 = *(r10 + 0x1f4)
int32_t rdi_2 = 0
char var_b8_1 = 0
int32_t var_b0_1 = result.d

if (result.d != 0)
    result = r9 + 0xe0
    uint64_t result_1 = result
    
    do
        char var_b6_1 = arg1.b
        uint64_t result_2 = *(result + 0x20)
        int64_t r8_1 = sx.q(rdi_2)
        int64_t rdx_3 = r8_1 << 5
        
        if (result_2 != 0)
            result = result_2
        
        void* rcx_2 = *(result + rdx_3 + 0x10)
        
        if (rcx_2 == 0 || *(r10 + 0x208) - *(r10 + 0x234) s<= 0)
        label_140823b59:
            int32_t rsi_2 = 0
            int64_t** rbx_2 = *(r9 + 0xc8)
            uint64_t r12_2 = sx.q(*(r9 + 0xd0)) << 3 u>> 3
            
            if (rbx_2 u> &rbx_2[sx.q(*(r9 + 0xd0))])
                r12_2 = 0
            
            if (r12_2 != 0)
                do
                    int64_t* r15_1 = *rbx_2
                    int64_t* rax_17 = *arg6 + 0x280
                    void* rcx_8 = *rax_17
                    
                    if ((rcx_8.b & 1) != 0)
                        rcx_8 = (rcx_8 s>> 1) + rax_17
                    
                    if (*(rcx_8 + sx.q(rsi_2) * 0x10 + 8) != 0)
                        int64_t var_80_2 = r11[2]
                        void* var_78_2 = arg_8
                        var_98 = *arg6
                        int64_t* var_88_2 = r15_1
                        int32_t var_68_1 = rdi_2
                        char var_64_1 = sub_140856cb0(r9, r15_1, zx.q(rdi_2))
                        char var_63_1 = sub_140856ba0(arg3, r15_1, zx.q(rdi_2))
                        (*(*r15_1 + 0x30))(r15_1, arg4, &var_98)
                        r9 = arg3
                        r11 = arg2
                    
                    rsi_2 += 1
                    rbx_2 = &rbx_2[1]
                    r14 += 1
                while (r14 != r12_2)
                
                r15 = arg4
            
            sub_14083fc00(arg_8, r15, arg6, r9, rdi_2, &var_a0, &var_b7)
            void* rax_25 = rcx_2
            int32_t rcx_15
            char rdx_11
            
            if (rax_25 != 0)
                rcx_15 = *(rax_25 + 0xc0)
                rdx_11 = 0
            else
                uint64_t result_3 = result_1
                rdx_11 = var_b6_1
                var_b8_1 = 1
                uint64_t result_4 = *(result_3 + 0x20)
                
                if (result_4 != 0)
                    result_3 = result_4
                
                rcx_15 = *(*(result_3 + rdx_3 + 8) + 0xb0)
                rax_25 = nullptr
            
            char var_c0_1 = rdx_11
            void* var_c8_1 = rax_25
            int32_t var_d0_1 = rdi_2
            int32_t var_d8_1 = rdx_1
            sub_14083ae90(arg_8, arg2, arg3, 0, rcx_15, arg6, r15, arg5, arg3, 0)
            r9 = arg3
            int32_t rsi_3 = 0
            int64_t r14_3 = 0
            int64_t** rbx_4 = *(r9 + 0xc8)
            uint64_t r12_4 = sx.q(*(r9 + 0xd0)) << 3 u>> 3
            
            if (rbx_4 u> &rbx_4[sx.q(*(r9 + 0xd0))])
                r12_4 = 0
            
            if (r12_4 != 0)
                do
                    int64_t* r15_2 = *rbx_4
                    int64_t* rcx_18 = *arg6 + 0x280
                    void* rax_31 = *rcx_18
                    
                    if ((rax_31.b & 1) != 0)
                        rax_31 = (rax_31 s>> 1) + rcx_18
                    
                    if (*(rax_31 + sx.q(rsi_3) * 0x10 + 8) != 0)
                        int64_t* var_88_3 = r15_2
                        int32_t var_68_2 = rdi_2
                        var_98 = *arg6
                        int64_t var_80_3 = arg2[2]
                        void* var_78_3 = arg_8
                        char var_64_2 = sub_140856cb0(r9, r15_2, zx.q(rdi_2))
                        char var_63_2 = sub_140856ba0(arg3, r15_2, zx.q(rdi_2))
                        (*(*r15_2 + 0x38))(r15_2, arg4, &var_98)
                        r9 = arg3
                    
                    rsi_3 += 1
                    rbx_4 = &rbx_4[1]
                    r14_3 += 1
                while (r14_3 != r12_4)
                
                r15 = arg4
            
            int32_t rcx_24 = data_14396f024
            
            if (rcx_24 == 0 || modu.dp.d(0:(rdi_2 + 1), rcx_24) != 0)
                r14 = 0
            else
                void*** rcx_27 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_41 = &rcx_27[2]
                
                if (rax_41 u> *(r15 + 0x38))
                    sub_140b0e3d0(r15 + 0x30, 0x18)
                    rcx_27 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_41 = &rcx_27[2]
                
                *(r15 + 0x30) = rax_41
                int64_t* rax_42 = *(r15 + 8)
                *(r15 + 0x14) += 1
                r9 = arg3
                r14 = 0
                *rax_42 = rcx_27
                *(r15 + 8) = &rcx_27[1]
                rcx_27[1] = 0
                *rcx_27 = &data_142dd5b50
            
            r10 = var_a8
            r11 = arg2
        else
            void* rdx_4 = r10 + 0x238
            void* rax_11 = *(rdx_4 + 8)
            int64_t rcx_5 = (sx.q(*(r10 + 0x248)) - 1) & r8_1
            
            if (*(r11 + 0x4f) == 0)
                if (rax_11 != 0)
                    rdx_4 = rax_11
                
                int32_t rax_13 = *(rdx_4 + (rcx_5 << 2))
                
                if (rax_13 == 0xffffffff)
                    goto label_140823b59
                
                int64_t r8_3 = *(r10 + 0x200)
                
                while (true)
                    int64_t rdx_6 = sx.q(rax_13) * 3
                    
                    if (*(r8_3 + (rdx_6 << 2)) == rdi_2)
                        break
                    
                    rax_13 = *(r8_3 + (rdx_6 << 2) + 4)
                    
                    if (rax_13 == 0xffffffff)
                        goto label_140823b59
                
                if (rax_13 == 0xffffffff)
                    goto label_140823b59
            else
                if (rax_11 != 0)
                    rdx_4 = rax_11
                
                int32_t rax_12 = *(rdx_4 + (rcx_5 << 2))
                
                if (rax_12 != 0xffffffff)
                    int64_t r8_2 = *(r10 + 0x200)
                    
                    while (true)
                        int64_t rdx_5 = sx.q(rax_12) * 3
                        
                        if (*(r8_2 + (rdx_5 << 2)) == rdi_2)
                            break
                        
                        rax_12 = *(r8_2 + (rdx_5 << 2) + 4)
                        
                        if (rax_12 == 0xffffffff)
                            goto label_140823e2e
                    
                    if (rax_12 != 0xffffffff)
                        goto label_140823b59
        
    label_140823e2e:
        arg1 = zx.q(var_b8_1)
        result = r9 + 0xe0
        rdi_2 += 1
    while (rdi_2 u< var_b0_1)

return result
