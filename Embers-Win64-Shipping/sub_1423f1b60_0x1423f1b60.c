// 函数: sub_1423f1b60
// 地址: 0x1423f1b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x10f8)
void var_1108
int64_t rax_1 = __security_cookie ^ &var_1108
int32_t var_10b8 = 0
void* r15 = arg2
uint64_t var_10c8 = 0
int32_t i_3 = 0
sub_140b911a0(&var_10c8, arg1 + 0xc08)
int64_t result = sub_140b911a0(&var_10c8, arg1 + 0xc18)
uint64_t i_2 = zx.q(i_3)
uint64_t rdi = var_10c8

if (i_2.d s> 0)
    uint64_t r12_1 = rdi
    uint64_t var_1098_1 = rdi
    uint64_t i_4 = i_2
    uint64_t i
    
    do
        int16_t* const rax_2
        
        if (*(r12_1 + 8) == 0)
            rax_2 = &data_142d40450
        else
            rax_2 = *r12_1
        
        var_10b8.q = rax_2
        void string
        result = sub_140b297e0(&var_10b8, &string, 0x800, 1)
        
        if (result.b != 0)
            void* rax_4 = sub_140d2f240(sub_142452380(), 0, &string, 0, 0, 0)
            int32_t var_10e8_1
            void var_1080
            var_10e8_1.q = sub_142427eb0(&var_1080)
            result = sub_1420efae0(r15, rax_4, nullptr, nullptr, var_10e8_1)
            int64_t result_1 = result
            
            if (result != 0)
                while (true)
                    result = sub_140b297e0(&var_10b8, &string, 0x800, 1)
                    
                    if (result.b == 0)
                        break
                    
                    wchar16* rax_6 = wcschr(&string, 0x3d)
                    
                    if (rax_6 != 0)
                        *rax_6 = 0
                        void* rcx_8 = *(result_1 + 0x10)
                        void* var_10b0 = rcx_8
                        int64_t* j_2
                        
                        if (rcx_8 == 0)
                            j_2 = nullptr
                        else
                            j_2 = *(rcx_8 + 0x50)
                        
                        int32_t var_10a0_1 = 0xffffffff
                        int16_t var_109c_1 = 0x101
                        char var_109a_1 = 0
                        sub_1406328d0(&var_10b0)
                        int64_t* j = j_2
                        
                        if (j != 0)
                            do
                                int16_t* var_10d8
                                int32_t var_10d0
                                
                                if (j == 0)
                                    var_10d8 = nullptr
                                    var_10d0 = 0
                                    sub_1405947f0(&var_10d8, 5)
                                    int32_t rax_7 = var_10d0 + 5
                                    var_10d0 = rax_7
                                    
                                    if (rax_7 s> 0)
                                        sub_140594770(&var_10d8)
                                    
                                    UnDecorator::getReferenceType(var_10d8, u"None", 0xa)
                                else
                                    sub_140b63b70(&j[5], &var_10d8)
                                
                                int16_t* const rcx_14 = &data_142d40450
                                
                                if (var_10d0 != 0)
                                    rcx_14 = var_10d8
                                
                                void* rbx_1
                                
                                if (sub_140a54510(rcx_14, &string) != 0
                                        || not(test_bit(zx.q(j[8].d), 0xe)))
                                    rbx_1.b = 0
                                else
                                    rbx_1.b = 1
                                
                                int16_t* rcx_15 = var_10d8
                                
                                if (rcx_15 != 0)
                                    sub_140a74f90(rcx_15)
                                
                                if (rbx_1.b != 0)
                                    int64_t* rsi = data_143ddb418
                                    rbx_1 = sx.q(*(j + 0x4c)) + result_1
                                    
                                    if (sub_140cec0e0(j, 0, rsi) != 0 && rax_6 != -2)
                                        var_10e8_1.q = result_1
                                        (*(*j + 0xa8))(j, &rax_6[1], rbx_1, 0x8000000, var_10e8_1, 
                                            rsi)
                                
                                int64_t* j_1 = j[4]
                                sub_1406328d0(&var_10b0)
                                j = j_1
                            while (j != 0)
                
                r12_1 = var_1098_1
                i_2 = i_4
                r15 = arg2
        
        r12_1 += 0x10
        i = i_2
        i_2 -= 1
        var_1098_1 = r12_1
        i_4 = i_2
    while (i != 1)
    i_2 = zx.q(i_3)
    rdi = var_10c8

uint64_t rbx_3 = rdi

if (i_2.d != 0)
    int32_t i_1
    
    do
        int64_t rcx_19 = *rbx_3
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
        
        rbx_3 += 0x10
        i_1 = i_2.d
        i_2 = zx.q(i_2.d - 1)
    while (i_1 != 1)

if (rdi != 0)
    result = sub_140a74f90(rdi)

__security_check_cookie(rax_1 ^ &var_1108)
return result
