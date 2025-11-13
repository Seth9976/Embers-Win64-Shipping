// 函数: sub_140d2ff60
// 地址: 0x140d2ff60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_5 = arg2
int16_t* var_58 = nullptr
int32_t rdx = 0
int32_t var_50 = 0
int32_t r8 = 0
int32_t var_4c = 0
int64_t rdi = -1

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_1.d + 1)
        r8 = var_4c
        rdx = var_50
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    var_50 = rax_1
    
    if (rax_1 s> r8)
        sub_140594770(&var_58)
    
    UnDecorator::getReferenceType(var_58, arg3, (rbx_1.d + 1) * 2)

wchar16* rax_2
int32_t r9
rax_2, r9 = wcsstr(arg3, &data_142d404c4)
int32_t rbx_3 = arg5
int64_t r13
r13.b = rax_2 != 0
r9.b = 1
sub_140d2b810(&i_5, &var_58, 1, r9, rbx_3 & 0x102006)
void* i_4 = i_5
int16_t* const r12 = &data_142d40450
void* result
int32_t var_68
int16_t* var_48

if (i_4 == 0)
    if (r13.b != 0)
        result = nullptr
    else
    label_140d302c6:
        
        if (var_58 != arg3)
            int32_t rdi_1
            
            if (arg3 == 0 || *arg3 == 0)
                rdi_1 = 0
            else
                do
                    rdi += 1
                while (arg3[rdi] != 0)
                
                rdi_1 = rdi.d + 1
            
            int32_t rcx_19 = var_4c
            int32_t rdx_16 = 0
            int32_t var_50_1 = 0
            
            if (rcx_19 != rdi_1)
                sub_1405947f0(&var_58, rdi_1)
                rcx_19 = var_4c
                rdx_16 = var_50_1
            
            int32_t rax_17 = rdi_1 + rdx_16
            var_50 = rax_17
            
            if (rax_17 s> rcx_19)
                sub_140594770(&var_58)
            
            if (rdi_1 != 0)
                memcpy(var_58, arg3, rdi_1 * 2)
        
        sub_140a20ba0(&var_58, &data_142d404c4, 1)
        int64_t* rax_18 = sub_140baaca0(&var_48, arg3)
        int32_t rcx_25 = rax_18[1].d
        int32_t r8_10 = rcx_25 - 1
        
        if (rcx_25 == 0)
            r8_10 = 0
        
        sub_140a20ba0(&var_58, *rax_18, r8_10)
        int16_t* rcx_27 = var_48
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        if (var_50 != 0)
            r12 = var_58
        
        var_68.b = arg7
        result = sub_140d2ff60(arg1, i_4, r12, arg4, rbx_3, arg6, var_68, arg8)
else
    int32_t var_78
    
    if (arg7 == 0 || r13.b == 0)
    label_140d300a8:
        void* i_1 = *(i_4 + 0x20)
        void* i_3 = i_4
        void* i = i_1
        
        if (i_1 != 0)
            do
                i_3 = i
                i = *(i + 0x20)
            while (i != 0)
        
        int32_t var_40
        
        if (((*(i_3 + 0x50) u>> 4).b & 1) == 0)
            void* i_2 = i_4
            
            for (; i_1 != 0; i_1 = *(i_1 + 0x20))
                i_2 = i_1
            
            i_5 = *(i_2 + 0x18)
            sub_140b63b70(&i_5, &var_48)
            int16_t* const rdx_7 = &data_142d40450
            
            if (var_40 != 0)
                rdx_7 = var_48
            
            var_78.q = arg8
            sub_140d23fd0(nullptr, rdx_7, rbx_3 & 0xffffffef, nullptr, var_78)
            int16_t* rcx_8 = var_48
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        
        int16_t* rdx_8 = &data_142d40450
        
        if (var_50 != 0)
            rdx_8 = var_58
        
        var_68 = 0
        void* result_2 = sub_140d2f0c0(arg1, i_4, *sub_140b58260(&i_5, rdx_8, 1), 0, 0, 0)
        
        if (data_143de5452 == 0)
        label_140d3022b:
            
            if (result_2 == 0)
                goto label_140d30234
            
            result = result_2
        else
            if (result_2 != 0)
                if ((*(result_2 + 8) & 0x8003400) != 0)
                    if (*(result_2 + 0x10) == 0)
                        var_48 = nullptr
                        var_40.q = 0
                        sub_1405947f0(&var_48, 5)
                        int32_t rax_11 = var_40 + 5
                        var_40 = rax_11
                        int32_t var_3c
                        
                        if (rax_11 s> var_3c)
                            sub_140594770(&var_48)
                        
                        UnDecorator::getReferenceType(var_48, u"None", 0xa)
                    else
                        sub_140d21830(result_2, &var_48, 0, 0)
                    
                    int16_t* r9_1 = &data_142d40450
                    
                    if (var_40 != 0)
                        r9_1 = var_48
                    
                    sub_140af98a0("Unknown", 0x35a, 
                        Return an object still needing load from StaticLoadObjectInternal %s", r9_1)
                    int16_t* rcx_15 = var_48
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    sub_140afbb40()
                
                goto label_140d3022b
            
        label_140d30234:
            
            if (test_bit(rbx_3, 0x10))
                goto label_140d302b0
            
            int16_t* rdx_12 = &data_142d40450
            
            if (var_50 != 0)
                rdx_12 = var_58
            
            uint64_t rbx_4 = *sub_140b58260(&i_5, rdx_12, 1)
            var_68 = 0
            void* rax_14 = sub_140d2f0c0(sub_140cdddf0(), i_4, rbx_4, 0, 0, 0)
            
            if (rax_14 == 0)
            label_140d302ad:
                rbx_3 = arg5
            label_140d302b0:
                
                if (result_2 == 0 && r13.b == 0)
                    goto label_140d302c6
                
                result = result_2
            else
                result = *(rax_14 + 0x28)
                
                if (result == 0)
                    goto label_140d302ad
                
                void* rax_15 = *(result + 0x10)
                int64_t rcx_18 = sx.q(*(arg1 + 0x38))
                
                if (rcx_18.d s> *(rax_15 + 0x38)
                        || *(*(rax_15 + 0x30) + (rcx_18 << 3)) != arg1 + 0x30)
                    goto label_140d302ad
    else
        int16_t* rdx_4 = &data_142d40450
        
        if (var_50 != 0)
            rdx_4 = var_58
        
        int32_t var_68_1 = 0
        var_78.b = 0
        void* result_1 = sub_140d2f0c0(arg1, i_4, *sub_140b58260(&i_5, rdx_4, 1), 0, 0, 0)
        
        if (result_1 == 0 || (*(result_1 + 8) & 0x8003400) != 0)
            goto label_140d300a8
        
        result = result_1
int16_t* rcx_29 = var_58

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

return result
