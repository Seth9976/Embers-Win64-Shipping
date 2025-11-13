// 函数: sub_141f87cb0
// 地址: 0x141f87cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
int32_t rax = (rbx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rbx << 3)) = arg1
int64_t* i = *(arg1 + 0xa0)

for (void* r12 = &i[sx.q(*(arg1 + 0xa8))]; i != r12; i = &i[1])
    void* rdi_1 = *i
    int64_t var_48 = 0
    int64_t var_40_1 = 0
    int32_t var_60 = 0xffffffff
    int64_t var_5c_1 = 0
    int64_t var_50 = 0
    
    if (rdi_1 == 0)
        int64_t arg_10 = 0
        var_50 = 0
    else
        void var_78
        int64_t* rax_2 = sub_140d21d60(&var_78, rdi_1)
        var_50 = *rax_2
        
        if (&var_48 != &rax_2[1])
            int64_t rcx_4 = var_48
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            var_48 = rax_2[1]
            rax_2[1] = 0
            var_40_1.d = rax_2[2].d
            var_40_1:4.d = *(rax_2 + 0x14)
            rax_2[2] = 0
        
        int64_t var_70
        
        if (var_70 != 0)
            sub_140a74f90(var_70)
        
        sub_140d3a3a0(&var_60, rdi_1)
        int32_t rax_6 = 0
        
        if (0 == data_1439aaa30)
            data_1439aaa30 = 0
        else
            rax_6 = data_1439aaa30
        
        var_5c_1:4.d = rax_6
    
    uint64_t j_1 = sub_140d3c6e0(&var_60)
    uint64_t j = j_1
    
    if (j_1 != 0)
    label_141f87e3c:
        void* rax_9 = sub_1424987b0()
        void* rdx_4 = *(j + 0x10)
        int64_t rax_10 = sx.q(*(rax_9 + 0x38))
        
        if (rax_10.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
            void* rax_12 = sub_142492460()
            void* rdx_5 = *(j + 0x10)
            int64_t rax_13 = sx.q(*(rax_12 + 0x38))
            
            if (rax_13.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_13 << 3)) == rax_12 + 0x30)
                int64_t* rsi_1 = *arg2
                int64_t rdi_2 = sx.q(arg2[1].d)
                int64_t* rax_15 = rsi_1
                void* rdx_6 = &rsi_1[rdi_2]
                
                if (rsi_1 != rdx_6)
                    while (*rax_15 != j)
                        rax_15 = &rax_15[1]
                        
                        if (rax_15 == rdx_6)
                            goto label_141f87eb2
                    
                    goto label_141f87f3d
                
            label_141f87eb2:
                uint64_t var_88 = 0
                int32_t var_80_1 = rdi_2.d
                
                if (rdi_2.d != 0)
                    sub_1405c4a00(&var_88, rdi_2.d, 0)
                    memcpy(var_88, rsi_1, (rdi_2 << 3).d)
                else
                    int32_t var_7c_1 = 0
                
                uint64_t j_3 = sub_141f87cb0(j, &var_88)
                j = j_3
                
                if (j_3 != 0)
                label_141f87f3d:
                    int64_t rcx_18 = var_48
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    int64_t rcx_19 = *arg2
                    
                    if (rcx_19 != 0)
                        sub_140a74f90(rcx_19)
                    
                    return j
    else if (var_50 != 0)
        if (j_1.d == data_1439aaa30)
            data_1439aaa30 = 0
        else
            j_1 = zx.q(data_1439aaa30)
        
        if (j_1.d != var_5c_1:4.d || var_60 != 0xffffffff)
            void* rax_7 = sub_140d2bce0(&var_50)
            sub_140d3a3a0(&var_60, rax_7)
            
            if (rax_7 != 0 || data_143e1d7b4 == 0)
                int32_t rax_8 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_8 = data_1439aaa30
                
                var_5c_1:4.d = rax_8
            
            uint64_t j_2 = sub_140d3c6e0(&var_60)
            j = j_2
            
            if (j_2 != 0)
                goto label_141f87e3c
    
    int64_t rcx_16 = var_48
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)

int64_t rcx_17 = *arg2

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return 0
