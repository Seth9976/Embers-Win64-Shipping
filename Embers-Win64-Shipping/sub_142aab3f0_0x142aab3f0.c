// 函数: sub_142aab3f0
// 地址: 0x142aab3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t* r15 = arg2
struct icu_64::UObject::icu_64::NumberingSystem::VTable** result

if (*arg2 s> 0)
    result = nullptr
else
    int64_t r12
    r12.b = 0
    int32_t* var_d8_1 = arg2
    char var_a8[0x49]
    int32_t rax_2 = sub_142a46470(arg1, "numbers", &var_a8, 0x60)
    int32_t var_c8 = rax_2
    int32_t rcx = *r15
    struct icu_64::UObject::icu_64::NumberingSystem::VTable** result_1 = nullptr
    
    if (rcx s> 0 || rcx == 0xffffff84)
        var_c8 = 0
        *r15 = 0
    label_142aab559:
        int64_t rcx_2 = 0
        char i
        
        do
            i = (*"default")[rcx_2]
            var_a8[rcx_2] = i
            rcx_2 += 1
        while (i != 0)
        goto label_142aab581
    
    if (rax_2 s<= 0)
        goto label_142aab559
    
    int64_t rcx_1 = sx.q(rax_2)
    
    if (rcx_1 u>= 0x60)
        __report_rangecheckfailure()
        noreturn
    
    var_a8[rcx_1] = 0
    char (* rax_3)[0x49] = &var_a8
    uint32_t i_1
    uint32_t rdx
    
    do
        rdx = zx.d(*rax_3)
        i_1 = zx.d((*rax_3)["default" - &var_a8])
        
        if (rdx != i_1)
            break
        
        rax_3 = &(*rax_3)[1]
    while (i_1 != 0)
    
    if (rdx - i_1 == 0)
    label_142aab581:
        int32_t var_c0 = 0
        char** rax_7 = sub_142a641c0(nullptr, *(arg1 + 0x28), &var_c0)
        char** rax_8 = sub_142a625a0(rax_7, "NumberElements", nullptr, &var_c0)
        
        if (var_c0 == 7)
        label_142aab742:
            *r15 = 7
            
            if (rax_8 != 0)
                sub_142a5f860(rax_8)
            
            if (rax_7 != 0)
                sub_142a5f860(rax_7)
            
            result = nullptr
        else
            while (true)
                var_c0 = 0
                var_c8 = 0
                void* rax_9 = sub_142a63c50(rax_8, &var_a8, &var_c8, &var_c0)
                
                if (var_c0 == 7)
                    goto label_142aab742
                
                int32_t r8_8 = var_c8
                
                if (r8_8 - 1 u<= 0x5e)
                    sub_142a8d6e0(rax_9, &var_a8, r8_8)
                    int64_t rax_14 = sx.q(var_c8)
                    
                    if (rax_14 u>= 0x60)
                        __report_rangecheckfailure()
                        noreturn
                    
                    var_a8[rax_14] = 0
                    break
                
                char (* rax_10)[0x49] = &var_a8
                uint32_t i_2
                uint32_t rdx_10
                
                do
                    rdx_10 = zx.d(*rax_10)
                    i_2 = zx.d((*rax_10)["native" - &var_a8])
                    
                    if (rdx_10 != i_2)
                        break
                    
                    rax_10 = &(*rax_10)[1]
                while (i_2 != 0)
                
                if (rdx_10 - i_2 != 0)
                    char (* rax_11)[0x49] = &var_a8
                    uint32_t i_3
                    uint32_t rdx_12
                    
                    do
                        rdx_12 = zx.d(*rax_11)
                        i_3 = zx.d((*rax_11)["finance" - &var_a8])
                        
                        if (rdx_12 != i_3)
                            break
                        
                        rax_11 = &(*rax_11)[1]
                    while (i_3 != 0)
                    
                    if (rdx_12 - i_3 != 0)
                        char (* rax_12)[0x49] = &var_a8
                        uint32_t i_4
                        uint32_t rdx_14
                        
                        do
                            rdx_14 = zx.d(*rax_12)
                            i_4 = zx.d((*rax_12)["traditional" - &var_a8])
                            
                            if (rdx_14 != i_4)
                                break
                            
                            rax_12 = &(*rax_12)[1]
                        while (i_4 != 0)
                        
                        if (rdx_14 - i_4 != 0)
                            r12.b = 1
                            break
                        
                        int64_t rcx_6 = 0
                        char i_5
                        
                        do
                            i_5 = (*"native")[rcx_6]
                            var_a8[rcx_6] = i_5
                            rcx_6 += 1
                        while (i_5 != 0)
                        continue
                
                int64_t rax_13 = 0
                char i_6
                
                do
                    i_6 = (*"default")[rax_13]
                    var_a8[rax_13] = i_6
                    rax_13 += 1
                while (i_6 != 0)
            
            if (rax_8 != 0)
                sub_142a5f860(rax_8)
            
            if (rax_7 != 0)
                sub_142a5f860(rax_7)
            
            if (r12.b == 0)
                result = sub_142aab890(&var_a8, r15)
            else
                *r15 = 0xffffff80
                struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax_15 =
                    j_sub_142a7dd00(0x58)
                var_c0.q = rax_15
                
                if (rax_15 != 0)
                    result_1 = sub_142aab230(rax_15)
                
                if (result_1 == 0)
                    *r15 = 7
                
                result = result_1
    else
        char (* rax_4)[0x49] = &var_a8
        uint32_t i_7
        uint32_t rdx_2
        
        do
            rdx_2 = zx.d(*rax_4)
            i_7 = zx.d((*rax_4)["native" - &var_a8])
            
            if (rdx_2 != i_7)
                break
            
            rax_4 = &(*rax_4)[1]
        while (i_7 != 0)
        
        if (rdx_2 - i_7 == 0)
            goto label_142aab581
        
        char (* rax_5)[0x49] = &var_a8
        uint32_t i_8
        uint32_t rdx_4
        
        do
            rdx_4 = zx.d(*rax_5)
            i_8 = zx.d((*rax_5)["traditional" - &var_a8])
            
            if (rdx_4 != i_8)
                break
            
            rax_5 = &(*rax_5)[1]
        while (i_8 != 0)
        
        if (rdx_4 - i_8 == 0)
            goto label_142aab581
        
        char (* rax_6)[0x49] = &var_a8
        uint32_t i_9
        uint32_t rdx_6
        
        do
            rdx_6 = zx.d(*rax_6)
            i_9 = zx.d((*rax_6)["finance" - &var_a8])
            
            if (rdx_6 != i_9)
                break
            
            rax_6 = &(*rax_6)[1]
        while (i_9 != 0)
        
        if (rdx_6 - i_9 == 0)
            goto label_142aab581
        
        result = sub_142aab890(&var_a8, r15)

__security_check_cookie(rax_1 ^ &var_f8)
return result
