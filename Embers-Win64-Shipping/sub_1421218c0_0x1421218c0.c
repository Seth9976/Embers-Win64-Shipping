// 函数: sub_1421218c0
// 地址: 0x1421218c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
void* result = (*(*arg1 + 0x2e8))(arg1, zx.q(arg3), 3)
void* result_1 = result
void* result_2 = result

if (result == 0)
    return result

sub_142120460(arg1, 0)
void* rax_1 = sub_142129070(result_2)
int64_t i_5 = sx.q(*(rax_1 + 0x28))
int64_t r14_1 = 0
int64_t i_2 = i_5
void var_58
int128_t var_50
int64_t arg_8

if (i_5 s> 0)
    int64_t rcx_2 = 0
    int64_t var_78_1 = 0
    int64_t i
    
    do
        void* rax_3 = *(rax_1 + 0x20)
        
        if ((rax_3.b & 1) != 0)
            rax_3 = (rax_3 s>> 1) + rax_1 + 0x20
        
        void* r14_2 = rax_3 + rcx_2
        sub_1421485e0(r14_2, rdi, &arg_8)
        int32_t rbx = arg1[0x1d].d
        int64_t r15_1 = 0
        int32_t rdi_1 = 0
        int32_t* rsi_2
        
        if (rbx s<= 0)
        label_1421219df:
            arg1[0x1d].d = rbx + 1
            
            if (rbx + 1 s> *(arg1 + 0xec))
                sub_140adefe0(&arg1[0x1c])
            
            rsi_2 = arg1[0x1c] + sx.q(rbx) * 0x24
            
            if (rsi_2 == 0)
                rsi_2 = nullptr
            else
                *rsi_2 = 0
                rsi_2[2].b = 2
                rsi_2[3] = 0xffffffff
                __builtin_memset(&rsi_2[4], 0, 0x14)
            
            void* rdx_4
            
            if (*(r14_2 + 0x18) == 0)
                rdx_4 = &data_142d40450
            else
                rdx_4 = *(r14_2 + 0x10)
                
                if ((rdx_4.b & 1) != 0)
                    rdx_4 = (rdx_4 s>> 1) + 0x10 + r14_2
            
            int32_t rdi_2 = *(r14_2 + 8)
            char rbx_1 = *(r14_2 + 0xc)
            sub_140b58260(&var_50, rdx_4, 1)
            char var_48_1 = rbx_1
            int32_t var_44_1 = rdi_2
            *rsi_2 = var_50
        else
            while (true)
                rsi_2 = arg1[0x1c] + r15_1
                
                if (*sub_140b4c620(&var_58, rsi_2) == *r14_2 && rsi_2[3] == *(r14_2 + 8)
                        && rsi_2[2].b == *(r14_2 + 0xc))
                    break
                
                rbx = arg1[0x1d].d
                rdi_1 += 1
                r15_1 += 0x24
                
                if (rdi_1 s>= rbx)
                    goto label_1421219df
        
        rcx_2 = var_78_1 + 0x28
        i = i_2
        i_2 -= 1
        rdi = arg2
        rsi_2[4] = arg_8.d.d
        var_78_1 = rcx_2
    while (i != 1)
    result_2 = result_1
    r14_1 = 0

void* rax_10 = sub_142129070(result_2)
int64_t i_4 = sx.q(*(rax_10 + 0x38))
int64_t i_3 = i_4

if (i_4 s> 0)
    int64_t rax_11 = 0
    int64_t arg_20 = 0
    int64_t i_1
    
    do
        void* rcx_12 = *(rax_10 + 0x30)
        
        if ((rcx_12.b & 1) != 0)
            rcx_12 = (rcx_12 s>> 1) + rax_10 + 0x30
        
        int64_t* rbx_2 = rcx_12 + rax_11
        sub_1421486e0(rbx_2, rdi, &result_1)
        int32_t rdi_3 = arg1[0x1f].d
        int32_t rbp_1 = 0
        int32_t* rsi_4
        
        if (rdi_3 s<= 0)
        label_142121b8d:
            arg1[0x1f].d = rdi_3 + 1
            
            if (rdi_3 + 1 s> *(arg1 + 0xfc))
                sub_1405c4f50(&arg1[0x1e])
            
            int64_t rsi_6 = sx.q(rdi_3) * 0x30
            rsi_4 = rsi_6 + arg1[0x1e]
            
            if (rsi_6 == neg.q(arg1[0x1e]))
                rsi_4 = nullptr
            else
                arg_8 = 0
                *rsi_4 = arg_8
                rsi_4[2].b = 2
                rsi_4[3] = 0xffffffff
                __builtin_memset(&rsi_4[4], 0, 0x20)
            
            void* rdx_10
            
            if (rbx_2[3].d == 0)
                rdx_10 = &data_142d40450
            else
                rdx_10 = rbx_2[2]
                
                if ((rdx_10.b & 1) != 0)
                    rdx_10 = (rdx_10 s>> 1) + 0x10 + rbx_2
            
            int32_t rdi_4 = rbx_2[1].d
            char rbx_3 = *(rbx_2 + 0xc)
            sub_140b58260(&var_50, rdx_10, 1)
            char var_48_2 = rbx_3
            int32_t var_44_2 = rdi_4
            *rsi_4 = var_50
        else
            while (true)
                rsi_4 = arg1[0x1e] + r14_1
                
                if (*sub_140b4c620(&var_58, rsi_4) == *rbx_2 && rsi_4[3] == rbx_2[1].d
                        && rsi_4[2].b == *(rbx_2 + 0xc))
                    r14_1 = 0
                    break
                
                rdi_3 = arg1[0x1f].d
                rbp_1 += 1
                r14_1 += 0x30
                
                if (rbp_1 s>= rdi_3)
                    r14_1 = 0
                    goto label_142121b8d
        
        rdi = arg2
        rax_11 = arg_20 + 0x30
        i_1 = i_3
        i_3 -= 1
        *(rsi_4 + 0x10) = result_1.o
        arg_20 = rax_11
    while (i_1 != 1)

return sub_142129e50(arg1)
