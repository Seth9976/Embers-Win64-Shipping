// 函数: sub_141018ca0
// 地址: 0x141018ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_978
int64_t rax_1 = __security_cookie ^ &var_978
void* r12 = *(arg1 + 0x10)
uint64_t i_3 = zx.q(arg3)
void* r15 = *(r12 + 0x20)
void*** rax_2 = j_sub_140a82f30(0xb8)

if (rax_2 != 0)
    void var_8c8
    sub_140b58260(&var_8c8, u"Command List Fence", 1)
    rax_2 = sub_14100ad10(rax_2, r15, *(arg1 + 0x18), &var_8c8)

sub_1405d16e0(arg1 + 0xe8, rax_2)
sub_141019f60(*(arg1 + 0xe8))
int64_t rcx_4
int64_t rbx_1

if (*(r15 + 0x50) != 2)
    rbx_1 = data_143e2c288
    
    if (data_143de5480 == 0)
        rcx_4 = 0
    else
        rcx_4.b = GetCurrentThreadId() != data_143de5470
    
    int32_t var_890_1 = 0

if (*(r15 + 0x50) == 2 || *(rbx_1 + (rcx_4 << 2)) == 0)
    int32_t var_890_2 = 1

if (data_143f0f1d8 == 0)
    int32_t var_88c_1 = *(arg1 + 0x18)
else
    int32_t var_88c = 1

int32_t var_898 = *(arg1 + 0xf0)
int32_t r9
int32_t var_894 = r9
int64_t* rcx_5 = *(r15 + 0x10)
uint64_t result = (*(*rcx_5 + 0x718))(rcx_5, r12, &var_898, arg1 + 0x28)
*(arg1 + 0x28)
void* var_958

if (i_3.d != 0)
    uint64_t i_2
    sub_141009700(&i_2, *(*(r12 + 0x20) + 0x18), arg1 + 0xf0)
    uint64_t i_1 = i_3
    uint64_t i
    
    do
        void* rbx_2 = *(arg1 + 0x10)
        int32_t r14 = *(arg1 + 0xf0)
        int64_t* rax_7 = j_sub_140a82f30(0x130)
        int64_t* rbx_3
        
        if (rax_7 == 0)
            rbx_3 = nullptr
        else
            var_958 = arg1
            rbx_3 = sub_14100a000(rax_7, rbx_2, r14, &i_2, var_958)
        
        *(rbx_3 + 0x14) += 1
        EnterCriticalSection(arg1 + 0x30)
        int64_t* rax_9 = j_sub_140a82f30(0x18)
        
        if (rax_9 != 0)
            *rax_9 = 0
            rax_9[1] = &data_142efcd90
            rax_9[2] = rbx_3
            
            if (rbx_3 != 0)
                *(rbx_3 + 0x14) += 1
            
            rax_9[1] = &data_142efcd90
            void** rax_10 = *(arg1 + 0x60)
            *(arg1 + 0x60) = rax_9
            *rax_10 = rax_9
        
        *(arg1 + 0x70) += 1
        result = LeaveCriticalSection(arg1 + 0x30)
        
        if (rbx_3 != 0)
            result = zx.q(*(rbx_3 + 0x14))
            *(rbx_3 + 0x14) -= 1
            
            if (result.d == 1)
                result = sub_141011360(rbx_3, result.b)
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    uint64_t i_4 = i_2
    i_2 = i_1
    
    if (i_4 != 0)
        result = (*(*i_4 + 0x10))(i_4)
        uint64_t i_5 = i_2
        
        if (i_5 != 0)
            result = (*(*i_5 + 0x10))(i_5)

if (*(r15 + 0x50) != 0)
    void* rax_13 = *(r12 + 0x20)
    int64_t* var_918 = nullptr
    int64_t* rcx_13 = *(rax_13 + 0x18)
    result = (**rcx_13)(rcx_13, &data_142eff570, &var_918)
    
    if (result.d s>= 0)
        int32_t dwSize_1 = 0x400
        int32_t dwSize_2 = *(*(*(arg1 + 0x10) + 0x20) + 0x844)
        
        if (dwSize_2 s> 0 && dwSize_2 s<= 0x400)
            dwSize_1 = dwSize_2
        
        uint64_t dwSize = sx.q(dwSize_1)
        result = VirtualAlloc(nullptr, dwSize, MEM_COMMIT, PAGE_READWRITE)
        *(arg1 + 0x148) = result
        
        if (result != 0)
            int64_t* rcx_15 = var_918
            int64_t var_910 = 0
            
            if ((*(*rcx_15 + 0x180))(rcx_15, result, &data_142efe600, &var_910, var_958) s< 0)
                result = VirtualFree(*(arg1 + 0x148), 0, MEM_RELEASE)
                *(arg1 + 0x148) = 0
            else
                void*** rax_17 = j_sub_140a82f30(0x80)
                void*** rax_18
                
                if (rax_17 == 0)
                    rax_18 = nullptr
                else
                    rax_18 = sub_14103eed0(rax_17, r12, *(arg1 + 0x1c))
                
                int64_t* rcx_17 = *(arg1 + 0x150)
                *(arg1 + 0x150) = rax_18
                
                if (rax_18 != 0)
                    rax_18[1].d += 1
                
                if (rcx_17 != 0)
                    rcx_17[1].d -= 1
                    
                    if (rcx_17[1].d == 1)
                        (**rcx_17)(rcx_17, 1)
                
                void* rbx_4 = *(arg1 + 0x150)
                int64_t rsi_1 = var_910
                int64_t* rcx_18 = *(rbx_4 + 0x20)
                *(rbx_4 + 0x20) = 0
                
                if (rcx_18 != 0)
                    (*(*rcx_18 + 0x10))(rcx_18)
                
                *(rbx_4 + 0x20) = rsi_1
                wchar16 var_848[0x400]
                memset(&var_848, 0, 0x800)
                sub_140b01a80(&var_848, u"BreadCrumbResource_%s", arg2)
                int64_t var_8e4_1 = 0x10001
                int32_t var_900_1 = 1
                int64_t* rcx_21 = *(arg1 + 0x158)
                int64_t var_8f8_1 = 0
                int32_t var_8e8_1 = 1
                int64_t var_8dc_1 = 1
                int32_t var_8d4_1 = 1
                int32_t var_8d0_1 = 0x10
                int32_t var_924 = 0x400
                *(arg1 + 0x158) = 0
                int128_t var_888 = var_900_1.o
                uint128_t var_878_1 = (dwSize << 2).o
                uint64_t var_858_1 = var_8d0_1.q
                int128_t var_868_1 = var_8e4_1:4.o
                
                if (rcx_21 != 0)
                    rcx_21[1].d -= 1
                    
                    if (rcx_21[1].d == 1)
                        (**rcx_21)(rcx_21, 1)
                
                char var_938_1 = 0
                result = sub_141048c60(r15, &var_888, *(arg1 + 0x150), 0, &var_924, nullptr, 
                    arg1 + 0x158, &var_848)
                
                if (result.d s< 0)
                    int64_t* rcx_23 = *(arg1 + 0x150)
                    *(arg1 + 0x150) = 0
                    
                    if (rcx_23 != 0)
                        rcx_23[1].d -= 1
                        
                        if (rcx_23[1].d == 1)
                            (**rcx_23)(rcx_23, 1)
                    
                    result = VirtualFree(*(arg1 + 0x148), 0, MEM_RELEASE)
                    *(arg1 + 0x148) = 0
    
    int64_t* rcx_26 = var_918
    
    if (rcx_26 != 0)
        result = (*(*rcx_26 + 0x10))(rcx_26)

__security_check_cookie(rax_1 ^ &var_978)
return result
