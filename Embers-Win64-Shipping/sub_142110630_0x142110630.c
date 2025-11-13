// 函数: sub_142110630
// 地址: 0x142110630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*arg2 = 0
int64_t* rsi = arg1
arg2[1] = 0
int64_t r13 = 0
int64_t* r15 = *arg1
uint64_t rcx_1 = sx.q(arg1[1].d) << 3 u>> 3

if (r15 u> &r15[arg1[1]])
    rcx_1 = 0

int16_t* var_58
int64_t var_48

if (rcx_1 != 0)
    do
        int64_t* rcx_2 = *r15
        void* rax_3
        
        if (rcx_2 != 0)
            rax_3 = (*(*rcx_2 + 0x290))(rcx_2)
        
        if (rcx_2 == 0 || rax_3 == 0)
            sub_140a20ba0(arg2, u"_NullLayer", 0xa)
        else
            int64_t* rax_5 = sub_140d21830(sub_140d21d80(rax_3), &var_48, 0, 0)
            int32_t rdx_1 = 0
            int16_t* rsi_1 = nullptr
            var_58 = nullptr
            int32_t var_50_1 = 0
            int32_t rcx_5 = rax_5[1].d
            int32_t rbx_1 = rcx_5 - 1
            int32_t rcx_6 = 0
            
            if (rcx_5 == 0)
                rbx_1 = 0
            
            int32_t var_4c_1 = 0
            
            if (rbx_1 + 2 s> 0)
                sub_1405947f0(&var_58, rbx_1 + 2)
                rcx_6 = var_4c_1
                rdx_1 = var_50_1
                rsi_1 = var_58
            
            int32_t r14_2 = rbx_1 + 2 + rdx_1
            
            if (r14_2 s> rcx_6)
                sub_140594770(&var_58)
                rsi_1 = var_58
            
            *rsi_1 = 0x5f
            int64_t rbx_2 = sx.q(rbx_1)
            memcpy(&rsi_1[1], *rax_5, rbx_2.d * 2)
            int32_t r8_2 = r14_2 - 1
            rsi_1[rbx_2 + 1] = 0
            var_58 = nullptr
            int32_t var_50_2
            var_50_2.q = 0
            
            if (r14_2 == 0)
                r8_2 = 0
            
            sub_140a20ba0(arg2, rsi_1, r8_2)
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            int64_t rcx_12 = var_48
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
        
        r15 = &r15[1]
        r13 += 1
    while (r13 != rcx_1)
    
    rsi = arg1

int64_t r13_1 = 0
int64_t* r15_1 = rsi[2]
uint64_t rcx_15 = sx.q(rsi[3].d) << 3 u>> 3

if (r15_1 u> &r15_1[rsi[3]])
    rcx_15 = 0

if (rcx_15 != 0)
    do
        int64_t* rcx_16 = *r15_1
        void* rax_10
        
        if (rcx_16 != 0)
            rax_10 = (*(*rcx_16 + 0x290))(rcx_16)
        
        if (rcx_16 == 0 || rax_10 == 0)
            sub_140a20ba0(arg2, u"_NullBlend", 0xa)
        else
            int64_t* rax_12 = sub_140d21830(sub_140d21d80(rax_10), &var_48, 0, 0)
            int32_t rdx_7 = 0
            int16_t* rsi_2 = nullptr
            var_58 = nullptr
            int32_t var_50_3 = 0
            int32_t rcx_19 = rax_12[1].d
            int32_t rbx_3 = rcx_19 - 1
            int32_t rcx_20 = 0
            
            if (rcx_19 == 0)
                rbx_3 = 0
            
            int32_t var_4c_2 = 0
            
            if (rbx_3 + 2 s> 0)
                sub_1405947f0(&var_58, rbx_3 + 2)
                rcx_20 = var_4c_2
                rdx_7 = var_50_3
                rsi_2 = var_58
            
            int32_t r14_4 = rbx_3 + 2 + rdx_7
            
            if (r14_4 s> rcx_20)
                sub_140594770(&var_58)
                rsi_2 = var_58
            
            *rsi_2 = 0x5f
            int64_t rbx_4 = sx.q(rbx_3)
            memcpy(&rsi_2[1], *rax_12, rbx_4.d * 2)
            int32_t r8_4 = r14_4 - 1
            rsi_2[rbx_4 + 1] = 0
            var_58 = nullptr
            int32_t var_50_4
            var_50_4.q = 0
            
            if (r14_4 == 0)
                r8_4 = 0
            
            sub_140a20ba0(arg2, rsi_2, r8_4)
            
            if (rsi_2 != 0)
                sub_140a74f90(rsi_2)
            
            int64_t rcx_26 = var_48
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
        
        r15_1 = &r15_1[1]
        r13_1 += 1
    while (r13_1 != rcx_15)
    
    rsi = arg1

sub_140a20ba0(arg2, &data_142d99650, 1)
int64_t rbx_5 = rsi[4]
int64_t rsi_3 = sx.q(rsi[5].d)

if (rbx_5 u> rsi_3 + rbx_5)
    rsi_3 = 0

if (rsi_3 != 0)
    do
        wchar32 const* const rdx_12 = &(*U"RGBXYZF10|")[8]
        int64_t r8_5 = -1
        
        if (*rbx_5 != 0)
            rdx_12 = &(*U"RGBXYZF10|")[7]
        
        do
            r8_5 += 1
        while (*(rdx_12 + (r8_5 << 1)) != 0)
        
        sub_140a20ba0(arg2, rdx_12, r8_5.d)
        rbx_5 += 1
        rdi += 1
    while (rdi != rsi_3)

return arg2
