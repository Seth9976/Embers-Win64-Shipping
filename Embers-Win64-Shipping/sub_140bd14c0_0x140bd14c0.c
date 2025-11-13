// 函数: sub_140bd14c0
// 地址: 0x140bd14c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cb2b40()
int64_t r15 = 0
void* const var_48 = &data_140bcc730
int32_t var_40 = 0
sub_140d21fd0()
void*** rax = sub_140a84c80(0, 0x30, 0)
void*** var_58 = rax
int32_t var_50 = 3
void* r12 = arg1 - 8
void* arg_18 = r12

if (rax == 0)
    arg_18 = r12
else
    *rax = &data_142e22de8
    rax[1] = r12
    *(rax + 0x10) = var_48.o
    rax[5] = sub_140a387b0()
    *rax = &data_142e22e40

if (rax != 0)
    sub_140599630(&data_1439aad30, 1)
    void var_70
    (*rax)[6](rax, &var_70)
    int64_t r14_1 = sx.q(data_1439aad38)
    int32_t rax_3 = (r14_1 + 1).d
    data_1439aad38 = rax_3
    
    if (rax_3 s> data_1439aad3c)
        sub_1405a4f90(&data_1439aad30)
    
    int64_t rcx_1 = data_1439aad30
    int64_t rax_5 = r14_1 * 2
    int64_t var_58_1 = 0
    int32_t var_50_1 = 0
    arg_18 = r12
    *(rcx_1 + (rax_5 << 3)) = rax
    *(rcx_1 + (rax_5 << 3) + 8) = 3

int32_t var_60 = 0
void (* var_68)(void* arg1) = sub_140bcc660
sub_140d21f60()
void*** rax_6 = sub_140a84c80(0, 0x30, 0)
void*** var_48_1 = rax_6
int32_t var_40_1 = 3

if (rax_6 != 0)
    int128_t zmm0_2 = var_68.o
    *rax_6 = &data_142e22de8
    rax_6[1] = r12
    *(rax_6 + 0x10) = zmm0_2
    rax_6[5] = sub_140a387b0()
    *rax_6 = &data_142e22e40

if (rax_6 != 0)
    sub_140599630(&data_1439aad48, 1)
    (*rax_6)[6](rax_6, &var_68)
    int64_t r14_2 = sx.q(data_1439aad50)
    int32_t rax_9 = (r14_2 + 1).d
    data_1439aad50 = rax_9
    
    if (rax_9 s> data_1439aad54)
        sub_1405a4f90(&data_1439aad48)
    
    int64_t rcx_3 = data_1439aad48
    int64_t rax_11 = r14_2 * 2
    int64_t var_48_2 = 0
    int32_t var_40_2 = 0
    *(rcx_3 + (rax_11 << 3)) = rax_6
    *(rcx_3 + (rax_11 << 3) + 8) = 3

int64_t* result = sub_140bc7ab0()

if (data_143e1aac0 == 0)
    return sub_140bc6b30(arg1 + 0x278)

if (*(arg1 + 8) == 0)
    *(arg1 + 0x2d) = 1
    int32_t i_3 = 0
    sub_140af2b60()
    sub_140b2ab20(&data_143dbb3f0, u"-zenworkercount=", &i_3)
    int32_t i_2 = i_3
    
    if (i_2 s> 0)
        int64_t rbx_2 = sx.q(*(arg1 + 0x3c0))
        int32_t i_1 = i_2
        
        if (i_2 s<= 3)
            i_1 = 3
        
        int32_t rax_12 = rbx_2.d + i_1
        *(arg1 + 0x3c0) = rax_12
        
        if (rax_12 s> *(arg1 + 0x3c4))
            sub_1407c3b60(arg1 + 0x3b8)
            i_2 = i_3
        
        void**** rbx_4 = rbx_2 * 0x38 + *(arg1 + 0x3b8)
        
        if (i_1 != 0)
            int32_t i
            
            do
                sub_140bd5ce0(rbx_4)
                rbx_4 = &rbx_4[7]
                i = i_1
                i_1 -= 1
            while (i != 1)
            i_2 = i_3
        
        if (i_2 s> *(arg1 + 0x24))
            sub_1405a52a0(arg1 + 0x18, i_2)
            i_2 = i_3
        
        int32_t r13_1 = 0
        
        if (i_2 s> 0)
            do
                int64_t rax_13 = *(arg1 + 0x3b8)
                int64_t rbx_5 = sx.q(*(arg1 + 0x20))
                int64_t rax_14 = *(arg1 + 0x270)
                int32_t rax_15 = (rbx_5 + 1).d
                *(arg1 + 0x20) = rax_15
                int64_t rax_19
                void* rcx_9
                int64_t* rdx_13
                
                if (r15 != 0)
                    if (rax_15 s> *(arg1 + 0x24))
                        sub_1405c4fe0(arg1 + 0x18)
                    
                    rcx_9 = arg1 + 0x4003f8
                    void*** rdx_17 = (rbx_5 << 6) + *(arg1 + 0x18)
                    *rdx_17 = &data_142e85f50
                    rdx_17[2] = rcx_9
                    rdx_17[1] = rax_13 + 0x70
                    rdx_17[4] = rax_14
                    rdx_17[5] = arg1 + 0x28
                    rdx_17[3] = arg1 + 0x3c8
                    rdx_17[6] = 0
                    rdx_17[7].b = 0
                    *(rdx_17 + 0x39) = 0
                    *(rdx_17 + 0x3c) = 0
                    void* var_78
                    rdx_13 = &var_78
                    rax_19 = *(arg1 + 0x3b8) + 0x70
                    var_78 = rcx_9
                else
                    if (rax_15 s> *(arg1 + 0x24))
                        sub_1405c4fe0(arg1 + 0x18)
                    
                    rcx_9 = arg1 + 0x800410
                    void*** rdx_12 = (rbx_5 << 6) + *(arg1 + 0x18)
                    *rdx_12 = &data_142e85f50
                    rdx_12[1] = rax_13
                    rdx_12[4] = rax_14
                    rdx_12[5] = arg1 + 0x28
                    rdx_12[2] = rcx_9
                    rdx_12[3] = arg1 + 0x3c8
                    rdx_12[6] = 0
                    rdx_12[7].b = 0
                    *(rdx_12 + 0x39) = 0
                    *(rdx_12 + 0x3c) = 0
                    void* var_80
                    rdx_13 = &var_80
                    rax_19 = *(arg1 + 0x3b8)
                    var_80 = rcx_9
                
                *rcx_9 = rax_19
                sub_1409d7d20(arg1 + 0xc00428, rdx_13)
                int64_t* rbx_8 = (r15 << 6) + *(arg1 + 0x18)
                void*** rax_25 = sub_140a6e140(rbx_8, u"FAsyncLoadingThreadWorker", 0, 0, -1, 0)
                rbx_8[6] = rax_25
                r13_1 += 1
                r15 += 1
                *(rbx_8 + 0x3c) = *(rax_25 + 0x44)
            while (r13_1 s< i_3)
            
            r12 = arg_18
    
    result = sub_140a6e140(r12, u"FAsyncLoadingThread", 0, 0, -1, 0)
    *(arg1 + 8) = result

return result
