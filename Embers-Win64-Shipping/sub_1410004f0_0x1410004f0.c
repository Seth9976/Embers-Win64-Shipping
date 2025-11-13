// 函数: sub_1410004f0
// 地址: 0x1410004f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void* r14 = arg9
int32_t rdx_1 = arg8 & 6
int32_t rdi = *(r14 + 0x24)
int32_t var_1c4

if (rdi != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rdi)
    var_1c4 = temp0_1
    int32_t var_198_1 = temp0_1
else
    var_1c4 = 0x20

uint64_t rbx = zx.q(arg7)
int64_t* r12 = nullptr
uint64_t result = 0
uint32_t count = rbx.d
uint64_t r15 = 0

if (rdx_1 != 0)
    uint64_t var_1b8_1 = 0
    
    if (rdi != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(rdi)
        int32_t r14_1 = temp0_2
        int32_t var_194_1 = r14_1
        
        while (true)
            void* rsi_1 = arg1[zx.q(r14_1) + 0x13b]
            void*** rax_3
            rax_3, arg5 = j_sub_140a82f30(0x168)
            
            if (rax_3 == 0)
                rbx = 0
            else
                rbx = sub_14100d930(rax_3, rsi_1, zx.q(arg6), rbx.d, arg8)
            
            *(rbx + 0xd0) = arg4
            
            if (*(rsi_1 + 0x18) != var_1c4)
                arg5 = sub_141059540(rsi_1, rbx + 0x68, var_1b8_1 + 0x68, arg5)
            else
                (*(*arg_8 + 0x10))(arg_8, rsi_1, arg3, zx.q(count), arg8, arg9, arg4, rbx + 0xd8, 
                    rbx + 0x68)
                var_1b8_1 = rbx
            
            if (r15 != 0)
                void* rsi_2 = *(r15 + 0xd8)
                *(r15 + 0xd8) = rbx
                (*(*(rbx + 0x20) + 8))(rbx + 0x20)
                
                if (rsi_2 != 0)
                    (*(*(rsi_2 + 0x20) + 0x10))(rsi_2 + 0x20)
                
                *(rbx + 0xe0) = 0
            else
                result = rbx
            
            r15 = rbx
            int32_t rax_13 = not.d(1 << r14_1.b) & rdi
            rdi = rax_13
            
            if (rax_13 != 0)
                uint64_t rflags_3
                int32_t temp0_3
                temp0_3, rflags_3 = _bit_scan_forward(rax_13)
                r14_1 = temp0_3
                int32_t var_190_1 = r14_1
            else
                r14_1 = 0x20
            
            if (rax_13 == 0)
                break
            
            rbx = zx.q(count)
            arg1 = arg_8
        
        r14 = arg9
else if (rdi != 0)
    uint64_t rflags_4
    int32_t temp0_4
    temp0_4, rflags_4 = _bit_scan_forward(rdi)
    int32_t rsi_3 = temp0_4
    int32_t var_1c4_1 = rsi_3
    
    while (true)
        int64_t r14_2 = arg1[zx.q(rsi_3) + 0x13b]
        void*** rax_15
        rax_15, arg5 = j_sub_140a82f30(0x168)
        
        if (rax_15 == 0)
            rbx = 0
        else
            rbx = sub_14100d930(rax_15, r14_2, zx.q(arg6), rbx.d, arg8)
        
        *(rbx + 0xd0) = arg4
        (*(*arg_8 + 0x10))(arg_8, r14_2, arg3, zx.q(count), arg8, arg9, arg4, rbx + 0xd8, 
            rbx + 0x68)
        
        if (r15 != 0)
            void* r14_3 = *(r15 + 0xd8)
            *(r15 + 0xd8) = rbx
            (*(*(rbx + 0x20) + 8))(rbx + 0x20)
            
            if (r14_3 != 0)
                (*(*(r14_3 + 0x20) + 0x10))(r14_3 + 0x20)
            
            *(rbx + 0xe0) = 0
        else
            result = rbx
        
        r15 = rbx
        int32_t rax_24 = not.d(1 << rsi_3.b) & rdi
        rdi = rax_24
        
        if (rax_24 != 0)
            uint64_t rflags_5
            int32_t temp0_5
            temp0_5, rflags_5 = _bit_scan_forward(rax_24)
            rsi_3 = temp0_5
            int32_t var_18c_1 = rsi_3
        else
            rsi_3 = 0x20
        
        if (rax_24 == 0)
            break
        
        rbx = zx.q(count)
        arg1 = arg_8
    
    r14 = arg9

int64_t* rcx_37 = *(r14 + 8)

if (rcx_37 != 0)
    if (rdx_1 == 0 && *(result + 0x70) != rdx_1)
        char rax_25 = sub_140a80f10()
        char rax_26
        
        if (rax_25 == 0)
            rax_26 = sub_140a80f40()
        
        if (rax_25 != 0 || rax_26 != 0)
            rbx.b = 0
        else
            rbx.b = 1
        
        void* var_168
        sub_14103f450(&var_168, *(result + 0x28))
        int64_t* r9_4 = &var_168
        int64_t rax_29
        
        if (rbx.b == 0)
            rax_29 = sub_1410130c0(var_168 + 0x7c0, count, 4, r9_4)
        else
            rax_29 = sub_141012e10(arg_8[zx.q(*(var_168 + 0x18)) + 0x94], count, 4, r9_4, arg5)
        
        int64_t* rcx_19 = *(r14 + 8)
        int512_t zmm0 = memcpy(rax_29, (*(*rcx_19 + 0x10))(rcx_19), count)
        int512_t zmm0_3
        
        if (rbx.b != 0)
            int64_t* rax_32
            int512_t zmm0_1
            rax_32, zmm0_1 = j_sub_140a82f30(0x68)
            
            if (rax_32 != 0)
                r12 = sub_14103f450(rax_32, var_168)
            
            int512_t zmm0_2 = sub_14105b290(r12, &var_168, zmm0_1)
            uint64_t result_1 = result
            int64_t* var_1a8_1 = r12
            
            if (sub_140a80f40() == 0)
                uint32_t rax_35
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_35.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_35.b == 0))
                    void var_68
                    int64_t* rax_36 = sub_14101ba30(&var_68, nullptr, 0xff)
                    void* rcx_26 = *rax_36
                    *(rcx_26 + 0x10) = result_1.o
                    *(rcx_26 + 0x20) = count.q
                    void* rcx_27 = *rax_36
                    int64_t* rdi_2 = *(rcx_27 + 0x30)
                    
                    if (rdi_2 != 0)
                        rdi_2[9].d += 1
                    
                    zmm0_3 = sub_140778000(rcx_27, rax_36[1], rax_36[2].d, 1)
                    
                    if (rdi_2 != 0)
                        rdi_2[9].d -= 1
                        
                        if (rdi_2[9].d == 1)
                            zmm0_3 = sub_140a2f6e0(rdi_2)
                else
                    zmm0_2.o = result_1.o
                    int128_t var_188 = zmm0_2.o
                    int64_t var_178_1 = count.q
                    zmm0_3 = sub_141010590(&var_188, &data_143f02b98, zmm0_2)
            else
                zmm0_3 = sub_141010590(&result_1, &data_143f02b98, zmm0_2)
        else if (arg2 == 0)
            void* rdx_16 = var_168
            void** const var_f8 = &data_142f00028
            int64_t var_f0_1 = 0
            uint64_t result_2 = result
            void var_e0
            sub_14103f450(&var_e0, rdx_16)
            uint32_t count_1 = count
            sub_14105b290(&var_e0, &var_168, zmm0)
            zmm0_3 = j_sub_141059a80(&var_e0, sub_141020760(&var_f8))
        else
            void*** rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_38 = &rdi_5[0x11]
            
            if (rax_38 u> *(arg2 + 0x38))
                zmm0 = sub_140b0e3d0(arg2 + 0x30, 0x90)
                rdi_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_38 = &rdi_5[0x11]
            
            *(arg2 + 0x30) = rax_38
            void**** rax_39 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_39 = rdi_5
            *(arg2 + 8) = &rdi_5[1]
            rdi_5[1] = 0
            *rdi_5 = &data_142f00028
            rdi_5[2] = result
            sub_14103f450(&rdi_5[3], var_168)
            rdi_5[0x10].d = count
            zmm0_3 = sub_14105b290(&rdi_5[3], &var_168, zmm0)
        
        j_sub_141059a80(&var_168, zmm0_3)
        rcx_37 = *(r14 + 8)
    
    int64_t rdx_18 = *rcx_37
    (*(rdx_18 + 0x20))(rcx_37, rdx_18)

rdx_1.b = 1
return result
