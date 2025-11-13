// 函数: sub_141fbd9d0
// 地址: 0x141fbd9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
bool cond:0 = arg1[0x13].d s<= 0
bool r13 = arg3
int64_t* rbx = arg1
void* rcx

if (not(cond:0))
    rcx = *arg1[0x12]

int64_t r15

if (cond:0 || rcx == 0 || *(rcx + 0x134) == 1)
    r15.b = 0
else
    r15.b = 1

uint8_t rax_2 = sub_141dce3a0(arg2)
char rax_3 = *(rbx + 0xe29)
int32_t arg_10
arg_10.b = rax_3

if ((*(arg2 + 0x59) & 0x10) != 0 && r13 == 0)
    if (r15.b != 0)
        goto label_141fbdb2a
    
    if (rax_2 == 0)
        sub_140d3a3a0(&arg_10, arg2)
        void* rdi_1 = rbx[0x2a]
        sub_141f87aa0(rdi_1 + 0x50, &arg_8, arg_10.q)
        int64_t rax_4 = sx.q(arg_8.d)
        void* rsi_1
        
        if (rax_4.d != 0xffffffff)
            rsi_1 = *(rdi_1 + 0x50) + rax_4 * 0x14
        
        int32_t rsi_2
        
        if (rax_4.d == 0xffffffff || rsi_1 == 0)
            rsi_2 = 0
        else
            rsi_2 = *(rsi_1 + 8)
        
        if (rbx[0x1a3].d != *(rbx + 0xd44))
            void* r8_1 = &rbx[0x1a9]
            void* rcx_4 = *(r8_1 + 8)
            
            if (rcx_4 != 0)
                r8_1 = rcx_4
            
            int32_t i = *(r8_1 + (((sx.q(rbx[0x1ab].d) - 1) & sx.q(rsi_2)) << 2))
            
            if (i != 0xffffffff)
                int64_t rdx_6 = rbx[0x1a2]
                
                do
                    int64_t rax_8 = sx.q(i) * 3
                    
                    if (*(rdx_6 + (rax_8 << 2)) == rsi_2)
                        break
                    
                    i = *(rdx_6 + (rax_8 << 2) + 4)
                while (i != 0xffffffff)
else if (r15.b != 0)
label_141fbdb2a:
    
    if (rax_2 != 0)
        void* arg_20
        
        if (r13 != 0)
            sub_141f96210(&rbx[0x79], arg2)
            void* r8_2 = *rbx[0x12]
            arg_20 = r8_2
            
            if (r8_2 != 0)
                if ((arg2[0xb].b & 1) != 0)
                    int64_t rcx_7 = sx.q(*(r8_2 + 0x88))
                    
                    if (rcx_7.d != 0)
                        int64_t rax_10 = *(r8_2 + 0x80)
                        int32_t r9_1 = 0
                        arg_10 = 0
                        int32_t rdi_2 = 0
                        int64_t rbx_1 = 0
                        r13 = *rax_10 != arg2
                        
                        do
                            int64_t r10_1 = sx.q(rdi_2)
                            rbx_1 += 1
                            rdi_2 += 1
                            
                            if (rbx_1 s< rcx_7)
                                int64_t rcx_8 = *(r8_2 + 0x80) + (rbx_1 << 3)
                                
                                do
                                    int32_t rax_12
                                    rax_12.b = *rcx_8 != arg2
                                    
                                    if (zx.d(r13) != rax_12)
                                        break
                                    
                                    rdi_2 += 1
                                    rbx_1 += 1
                                    rcx_8 += 8
                                while (rbx_1 s< rcx_7)
                            
                            int32_t r12_2 = rdi_2 - r10_1.d
                            
                            if (r13 != 0)
                                if (r9_1 != r10_1.d)
                                    int64_t rcx_9 = *(r8_2 + 0x80)
                                    memmove(rcx_9 + (sx.q(r9_1) << 3), rcx_9 + (r10_1 << 3), 
                                        r12_2 << 3)
                                    r9_1 = arg_10
                                    r8_2 = arg_20
                                
                                r9_1 += r12_2
                                arg_10 = r9_1
                            
                            r13 ^= 1
                        while (rbx_1 s< rcx_7)
                        
                        rbx = arg_8
                        *(r8_2 + 0x88) = r9_1
                
                sub_140d3a3a0(&arg_8, arg2)
                void* r15_2 = arg_20
                int64_t* rax_14 = sub_141fb2e20(r15_2, &arg_8)
                
                if (rax_14 != 0)
                    int64_t rdx_12 = *rax_14
                    rax_14[0x12].d &= 0xfffffff7
                    (*(rdx_12 + 0x270))(rax_14, rdx_12)
                    rax_14[0xe] = 0
                    sub_141f83590(rax_14, 0)
                
                sub_140dba910(r15_2 + 0x1468, arg2)
            
            sub_142174860(rbx[0xde], arg2)
            return sub_141caa060(&rbx[0x6f], arg2[3])
        
        int64_t* var_68
        sub_140d21830(arg2, &var_68, 0, 0)
        int32_t var_58
        sub_140598750(&rbx[0xf4], &var_58)
        int64_t* var_50
        *var_50 = 0
        arg_8 = var_68
        int32_t var_60
        var_50[1].d = var_60
        
        if (var_60 != 0)
            sub_1405a4c70(var_50, var_60, 0)
            memcpy(*var_50, arg_8, var_60 * 2)
        else
            *(var_50 + 0xc) = 0
        
        var_50[2].d = 0xffffffff
        int32_t rax_16 = var_50[1].d
        int16_t* rdx_20
        
        if (rax_16 == 0)
            rdx_20 = &data_142d40450
        else
            rdx_20 = *var_50
        
        int32_t rcx_22 = rax_16 - 1
        
        if (rax_16 == 0)
            rcx_22 = 0
        
        sub_14059a6d0(&rbx[0xf4], &arg_8, sub_1405969c0(rcx_22, rdx_20), var_50, var_58, nullptr)
        
        if (arg_10.b != 0)
            sub_140598750(&rbx[0x113], &var_58)
            *var_50 = 0
            arg_8 = var_68
            var_50[1].d = var_60
            
            if (var_60 != 0)
                sub_1405a4c70(var_50, var_60, 0)
                memcpy(*var_50, arg_8, var_60 * 2)
            else
                *(var_50 + 0xc) = 0
            
            var_50[2].d = 0xffffffff
            int32_t rax_19 = var_50[1].d
            int16_t* rdx_26
            
            if (rax_19 == 0)
                rdx_26 = &data_142d40450
            else
                rdx_26 = *var_50
            
            int32_t rcx_27 = rax_19 - 1
            
            if (rax_19 == 0)
                rcx_27 = 0
            
            sub_14059a6d0(&rbx[0x113], &arg_8, sub_1405969c0(rcx_27, rdx_26), var_50, var_58, 
                nullptr)
        
        sub_140d3a3a0(&arg_20, arg2)
        void* rdi_6 = rbx[0x2a]
        sub_141f87aa0(rdi_6 + 0x50, &arg_8, arg_20)
        int64_t rax_21 = sx.q(arg_8.d)
        
        if (rax_21.d != 0xffffffff)
            void* rcx_31 = *(rdi_6 + 0x50) + rax_21 * 0x14
            
            if (rcx_31 != 0)
                int32_t rax_23 = *(rcx_31 + 8)
                arg_8.d = rax_23
                
                if (rax_23 != 0)
                    sub_141f77ab0(&rbx[0xfe], &arg_20, &arg_8, nullptr)
        
        int64_t* rcx_33 = var_68
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        rax_3 = arg_10.b
        r13 = arg3
    
    if (r15.b != 0 && rax_2 == 0 && rax_3 != 0)
        sub_140d3a3a0(&arg_10, arg2)
        void* rdi_7 = rbx[0x2a]
        sub_141f87aa0(rdi_7 + 0x50, &arg_8, arg_10.q)
        int64_t rax_24 = sx.q(arg_8.d)
        
        if (rax_24.d != 0xffffffff)
            void* rcx_36 = *(rdi_7 + 0x50) + rax_24 * 0x14
            
            if (rcx_36 != 0)
                int32_t rax_26 = *(rcx_36 + 8)
                arg_8.d = rax_26
                
                if (rax_26 != 0)
                    sub_141f77ab0(&rbx[0x11d], &arg_10, &arg_8, nullptr)

sub_141fab4a0(rbx, &arg_8, sub_141dc9840(arg2))
uint64_t result = sub_14216eb80(rbx, arg2, r13)
int64_t* rbx_2 = arg_8

if (rbx_2 == 0)
    return result

int64_t* rcx_41 = *rbx_2
(*(*rcx_41 + 0x2a8))(rcx_41, 0)
int64_t* rcx_42 = rbx_2[1]
int64_t rdx_39 = sx.q(*(rbx_2 + 0x14))

if (rdx_39.d s< rcx_42[1].d)
    int64_t r8_18 = rdx_39 * 0x28
    
    do
        r8_18 += 0x28
        rdx_39 = zx.q(rdx_39.d + 1)
        *(*rcx_42 + r8_18 - 4) = rbx_2[2].d
        rcx_42 = rbx_2[1]
    while (rdx_39.d s< rcx_42[1].d)

return j_sub_140a74f90(rbx_2)
