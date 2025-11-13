// 函数: sub_140fa0000
// 地址: 0x140fa0000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t r15 = 0
int32_t var_158 = 0
void* rdi = arg1
int64_t* rcx_1 = *(arg1 + 0x3f0) + 0x4b8
int64_t var_138 = 0
int64_t var_130 = 0
(*(*rcx_1 + 8))(rcx_1, &var_138)
int64_t rcx_2 = var_138

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* result = sub_140ac6680(arg2)
uint64_t var_150 = 0
int32_t r12 = result[1].d
int64_t rbx = *result

if (r12 != 0)
    sub_1405a4c70(&var_150, r12, 0)
    result = memcpy(var_150, rbx, r12 * 2)

int32_t i = 0

if (data_143e2b7c8 s> 0)
    do
        int64_t* rbx_1 = data_143e2b7c0
        void var_118
        result = sub_140fb2f00(rdi, &var_118)
        int64_t* rcx_7 = *(rbx_1 + r15)
        
        if (rcx_7 == *result)
            rdi.b = 0
        else
            int16_t* rdx_4 = &data_142d40450
            
            if (r12 != 0)
                rdx_4 = var_150
            
            int16_t* const rcx_8
            
            if (rcx_7[1].d == 0)
                rcx_8 = &data_142d40450
            else
                rcx_8 = *rcx_7
            
            result = sub_140a54510(rcx_8, rdx_4)
            
            if (result.d != 0)
                rdi.b = 0
            else
                rdi.b = 1
        
        int64_t* var_110
        
        if (var_110 != 0)
            var_110[1].d -= 1
            
            if (var_110[1].d == 1)
                result = (**var_110)(var_110)
                int32_t temp2_1 = *(var_110 + 0xc)
                *(var_110 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*var_110 + 8))(var_110, 1)
        
        if (rdi.b != 0)
            int64_t var_68_1 = *arg2
            int64_t* rax_6 = arg2[1]
            int64_t var_c8
            __builtin_memset(&var_c8, 0, 0x2c)
            int32_t var_9c_1 = 0x80
            int32_t var_98_1 = 0xffffffff
            int32_t var_94_1 = 0
            int64_t var_88_1 = 0
            int32_t var_80_1 = 0
            int32_t var_78 = 4
            
            if (rax_6 != 0)
                rax_6[1].d += 1
            
            int32_t var_58_1 = arg2[2].d
            char var_50_1 = 1
            int64_t var_168 = 0
            int32_t var_160_1 = 0
            sub_1405947f0(&var_168, 5)
            int32_t rax_8 = var_160_1 + 5
            var_160_1 = rax_8
            
            if (rax_8 s> 0)
                sub_140594770(&var_168)
            
            UnDecorator::getReferenceType(var_168, u"Name", 0xa)
            int64_t* var_128 = &var_168
            int32_t* var_120_1 = &var_78
            sub_140b91dc0(&var_c8, &var_158, &var_128, nullptr)
            int64_t rcx_15 = var_168
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            if (var_50_1 != 0)
                char var_50_2 = 0
                
                if (rax_6 != 0)
                    rax_6[1].d -= 1
                    
                    if (rax_6[1].d == 1)
                        (**rax_6)(rax_6)
                        int32_t rax_11 = *(rax_6 + 0xc)
                        *(rax_6 + 0xc) -= 1
                        
                        if (rax_11 == 1)
                            (*(*rax_6 + 8))(rax_6, 1)
            
            void* rbx_4 = *(arg1 + 0x3f0)
            void var_108
            void var_f0
            char* var_d8
            (*(*(rbx_4 + 0x4b8) + 8))(rbx_4 + 0x4b8, 
                sub_140ac6680(sub_140aaca20(&var_108, 
                    sub_140a96390(&var_d8, 
                        _vfprintf_p_l(&var_f0, A theme already exists with the name '{Name}'.", 
                        ColorThemesViewer")), 
                &var_c8)))
            int64_t* var_100
            
            if (var_100 != 0)
                var_100[1].d -= 1
                
                if (var_100[1].d == 1)
                    (**var_100)(var_100)
                    int32_t rax_20 = *(var_100 + 0xc)
                    *(var_100 + 0xc) -= 1
                    
                    if (rax_20 == 1)
                        (*(*var_100 + 8))(var_100, 1)
            
            int64_t* var_e8
            
            if (var_e8 != 0)
                var_e8[1].d -= 1
                
                if (var_e8[1].d == 1)
                    (**var_e8)(var_e8)
                    int32_t rsi_1 = *(var_e8 + 0xc)
                    *(var_e8 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*var_e8 + 8))(var_e8, zx.q(rsi_1))
            
            int32_t var_80_2 = 0
            
            if (var_88_1 != 0)
                sub_140a74f90(var_88_1)
            
            result = sub_140acd610(&var_c8)
            break
        
        rdi = arg1
        i += 1
        r15 += 0x10
    while (i s< data_143e2b7c8)

uint64_t rcx_29 = var_150

if (rcx_29 != 0)
    result = sub_140a74f90(rcx_29)

__security_check_cookie(rax_1 ^ &var_188)
return result
