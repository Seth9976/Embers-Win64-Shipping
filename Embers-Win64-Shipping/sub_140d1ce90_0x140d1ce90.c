// 函数: sub_140d1ce90
// 地址: 0x140d1ce90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_828
int64_t rax_1 = __security_cookie ^ &var_828
char r14 = 0
int32_t i = 0
void** result = *arg2
int64_t rbx = arg2[1]
void** result_1

if (result == 0)
    result_1 = nullptr
else
    result = result()
    result_1 = result

void** result_2

if (rbx == 0)
    result_2 = nullptr
else
    result = rbx()
    result_2 = result

if (*arg1 == 0)
    char* rdx = arg2[2]
    void*** rbx_3
    int64_t rcx_26
    
    if ((arg2[8].d & 0x100000) == 0)
        void var_558
        void* rax_16 = sub_14060c4d0(&var_558, rdx)
        int32_t rdi_3 = *(arg2 + 0x3c)
        void var_7b0
        uint64_t rbx_6 = *sub_140b58260(&var_7b0, *(rax_16 + 0x108), 1)
        void*** rax_19 = sub_140d2d830(sub_140bdfab0(), result_1, rbx_6, rdi_3, 0, 0, nullptr)
        void var_198
        
        if (rax_19 == 0)
            rbx_3 = nullptr
        else
            int64_t* rax_20 = sub_140d159c0(&var_198)
            int32_t var_808_3
            var_808_3.q = arg2[5]
            rbx_3 = sub_140bd6280(rax_19, rax_20, result_2, arg2[8].d, var_808_3)
            r14 = 4
        
        if ((r14 & 4) != 0)
            sub_140d16260(&var_198)
        
        int64_t var_458
        rcx_26 = var_458
    label_140d1d15b:
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
    else
        void var_7e0
        
        if (arg2[3] == 0)
            void var_798
            void* rax_2 = sub_14060c4d0(&var_798, rdx)
            int32_t rdi_1 = *(arg2 + 0x3c)
            uint64_t rbx_1 = *sub_140b58260(&var_7e0, *(rax_2 + 0x108), 1)
            void* rax_5 = sub_140d2d830(sub_140bdf4a0(), result_1, rbx_1, rdi_1, 0, 0, nullptr)
            void var_438
            
            if (rax_5 == 0)
                rbx_3 = nullptr
            else
                int64_t* rax_6 = sub_140d159c0(&var_438)
                int32_t var_808_1
                var_808_1.q = arg2[5]
                rbx_3 = sub_140bd6280(rax_5, rax_6, result_2, arg2[8].d, var_808_1)
                r14 = 1
            
            if ((r14 & 1) != 0)
                sub_140d16260(&var_438)
            
            int64_t var_698
            rcx_26 = var_698
            goto label_140d1d15b
        
        void var_678
        void* rax_8 = sub_14060c4d0(&var_678, rdx)
        int32_t rdi_2 = *(arg2 + 0x3c)
        void var_7b8
        uint64_t rbx_4 = *sub_140b58260(&var_7b8, *(rax_8 + 0x108), 1)
        void* rax_11 = sub_140d2d830(sub_140bdfff0(), result_1, rbx_4, rdi_2, 0, 0, nullptr)
        void var_2e8
        
        if (rax_11 == 0)
            rbx_3 = nullptr
        else
            int64_t* rax_12 = sub_140d159c0(&var_2e8)
            int32_t var_808_2
            var_808_2.q = arg2[5]
            rbx_3 = sub_140bd6410(rax_11, rax_12, result_2, arg2[8].d, var_808_2)
            r14 = 2
        
        if ((r14 & 2) != 0)
            sub_140d16260(&var_2e8)
        
        int64_t var_578
        
        if (var_578 != 0)
            sub_140a74f90(var_578)
        
        rbx_3[0x1c] = *sub_140b58170(&var_7e0, arg2[3], 1)
        rbx_3[0x1d] = *sub_140b58170(&var_7e0, arg2[4], 1)
    *arg1 = rbx_3
    *(rbx_3 + 0xba) = *(arg2 + 0x44)
    *(rbx_3 + 0xbc) = *(arg2 + 0x46)
    int32_t i_1 = arg2[7].d
    int64_t var_7d8 = arg2[6]
    i = i_1
    
    if (i_1 != 0)
        do
            char var_7c0_1 = 1
            int128_t var_7a8 = rbx_3.o
            sub_140d1ac90(&var_7a8, &var_7d8, &i)
        while (i != 0)
    
    (*rbx_3)[0x4d](rbx_3)
    result = sub_140ca8970(rbx_3, 0)

__security_check_cookie(rax_1 ^ &var_828)
return result
