// 函数: sub_141d4ef40
// 地址: 0x141d4ef40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
uint64_t var_50 = __security_cookie ^ &var_d8
int64_t* rbx = arg2

if (*(arg1 + 0x68) != 0)
    *(arg1 + 0x68) = 0

if (*(arg1 + 0x100) s> 1)
    if (*(arg1 + 0x130) != 0)
        EnterCriticalSection(arg1 + 0xd0)
        int64_t* rcx_1 = *(arg1 + 0x130)
        (**rcx_1)(rcx_1)
        
        if (arg1 != -0xd0)
            LeaveCriticalSection(arg1 + 0xd0)
        
        rbx = arg2
    
    int64_t* rcx_3 = *(arg1 + 0xc8)
    *(arg1 + 0xc0) = -0x8000000000000000
    sub_141d4c940(rcx_3)
    *(arg1 + 0x100) = 0
    
    if (*(arg1 + 0x104) != 0)
        sub_1405947f0(arg1 + 0xf8, 0)
    
    *(arg1 + 0x108) = 0
    sub_141d4d130(arg1)

uint64_t result

if (rbx[1].d s> 1)
    TEB* gsbase
    
    if (data_143f37948
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f37948)
        
        if (data_143f37948 == 0xffffffff)
            sub_140b58170(&data_143f37940, "Media", 1)
            _Init_thread_footer(&data_143f37948)
    
    int64_t* rax_4 = sub_140b3dbe0(data_143f37940)
    int64_t var_98
    sub_141d4de90(arg1, &var_98, rbx, arg3)
    int64_t* var_90
    
    if (var_98 != *(arg1 + 0x130))
        EnterCriticalSection(arg1 + 0xd0)
        uint128_t zmm1_1 = var_98.o
        uint128_t var_a8 = zmm1_1
        int64_t* rcx_12 = _mm_bsrli_si128(zmm1_1, 8).q
        var_90 = rcx_12
        
        if (rcx_12 != 0)
            rcx_12[1].d += 1
            zmm1_1 = var_a8
        
        if (&var_a8 != arg1 + 0x130)
            uint128_t var_60_1 = zmm1_1
            var_a8 = *(arg1 + 0x130)
            *(arg1 + 0x130) = zmm1_1
        
        void* rcx_13 = var_a8:8.q
        
        if (rcx_13 != 0)
            int32_t rax_5 = *(rcx_13 + 8)
            *(rcx_13 + 8) -= 1
            
            if (rax_5 == 1)
                int64_t* rdi_1 = var_a8:8.q
                (**rdi_1)(rdi_1)
                int32_t rax_7 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_7 == 1)
                    int64_t* rcx_15 = var_a8:8.q
                    (*(*rcx_15 + 8))(rcx_15, 1)
        
        if (arg1 != -0xd0)
            LeaveCriticalSection(arg1 + 0xd0)
    
    int64_t* rbx_3 = *(arg1 + 0x20)
    int64_t* rdi_2
    
    if (*(arg1 + 0x130) != 0)
        int64_t var_78
        
        if (rbx_3 == 0)
            var_78 = 0
        else
            int32_t rax_27 = 0
            bool z_4
            
            if (0 == rbx_3[1].d)
                rbx_3[1].d = 0
                z_4 = true
            else
                rax_27 = rbx_3[1].d
                z_4 = false
            
            if (z_4)
            label_141d4f257:
                rbx_3 = nullptr
                var_78 = 0
            else
                while (true)
                    bool z_5
                    
                    if (rax_27 == rbx_3[1].d)
                        rbx_3[1].d = rax_27 + 1
                        z_5 = true
                    else
                        rbx_3[1].d
                        z_5 = false
                    
                    if (z_5)
                        break
                    
                    rax_27 = 0
                    bool z_6
                    
                    if (0 == rbx_3[1].d)
                        rbx_3[1].d = 0
                        z_6 = true
                    else
                        rax_27 = rbx_3[1].d
                        z_6 = false
                    
                    if (z_6)
                        goto label_141d4f257
                
                if (rbx_3 == 0)
                    var_78 = 0
                else
                    int64_t rax_43 = *(arg1 + 0x18)
                    
                    if (rax_43 == 0)
                        var_78 = 0
                    else
                        var_78 = rax_43 + 8
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        int64_t* rax_30 = (*(*rax_4 + 0x80))(rax_4)
        int64_t r8_2 = *rax_30
        (*r8_2)(rax_30, &var_78, r8_2)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_33 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_33 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_37 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_37 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t* rcx_31 = *(arg1 + 0x130)
        (*(*rcx_31 + 0x70))(rcx_31, arg1 + 0x140)
        sub_140597df0(arg1 + 0xf8, arg2)
        
        if (arg4 != 0 && arg4 != arg1 + 0x38)
            if (*(arg1 + 0x68) != 0)
                *(arg1 + 0x68) = 0
            
            *(arg1 + 0x38) = *arg4
            *(arg1 + 0x48) = arg4[1]
            *(arg1 + 0x58) = arg4[2]
            *(arg1 + 0x68) = 1
        
        int64_t* rcx_33 = *(arg1 + 0x130)
        
        if ((*(*rcx_33 + 0x50))(rcx_33, arg2, arg3, arg4) != 0)
            rdi_2.b = 1
        else
            *(arg1 + 0x100) = 0
            
            if (*(arg1 + 0x104) != 0)
                sub_1405947f0(arg1 + 0xf8, 0)
            
            if (*(arg1 + 0x68) != 0)
                *(arg1 + 0x68) = 0
            
            rdi_2.b = 0
    else
        int64_t var_88
        
        if (rbx_3 == 0)
            var_88 = 0
        else
            int32_t rax_9 = 0
            bool z_1
            
            if (0 == rbx_3[1].d)
                rbx_3[1].d = 0
                z_1 = true
            else
                rax_9 = rbx_3[1].d
                z_1 = false
            
            if (z_1)
            label_141d4f157:
                rbx_3 = nullptr
                var_88 = 0
            else
                while (true)
                    bool z_2
                    
                    if (rax_9 == rbx_3[1].d)
                        rbx_3[1].d = rax_9 + 1
                        z_2 = true
                    else
                        rbx_3[1].d
                        z_2 = false
                    
                    if (z_2)
                        break
                    
                    rax_9 = 0
                    bool z_3
                    
                    if (0 == rbx_3[1].d)
                        rbx_3[1].d = 0
                        z_3 = true
                    else
                        rax_9 = rbx_3[1].d
                        z_3 = false
                    
                    if (z_3)
                        goto label_141d4f157
                
                if (rbx_3 == 0)
                    var_88 = 0
                else
                    int64_t rax_25 = *(arg1 + 0x18)
                    
                    if (rax_25 == 0)
                        var_88 = 0
                    else
                        var_88 = rax_25 + 8
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        int64_t* rax_12 = (*(*rax_4 + 0x80))(rax_4)
        int64_t r8_1 = *rax_12
        (*(r8_1 + 8))(rax_12, &var_88, r8_1)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_16 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_16 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (rbx_3 == 0)
            rdi_2.b = 0
        else
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d != 1)
                rdi_2.b = 0
            else
                (**rbx_3)(rbx_3)
                int32_t rax_22 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_22 != 1)
                    rdi_2.b = 0
                else
                    (*(*rbx_3 + 8))(rbx_3, 1)
                    rdi_2.b = 0
    
    if (var_90 != 0)
        var_90[1].d -= 1
        
        if (var_90[1].d == 1)
            (**var_90)(var_90)
            int32_t r14_1 = *(var_90 + 0xc)
            *(var_90 + 0xc) -= 1
            
            if (r14_1 == 1)
                int64_t r8_5 = *var_90
                (*(r8_5 + 8))(var_90, zx.q(r14_1), r8_5)
    
    result = zx.q(rdi_2.b)
else
    result.b = 0

__security_check_cookie(var_50 ^ &var_d8)
return result
