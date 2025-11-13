// 函数: sub_1428a2e30
// 地址: 0x1428a2e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc0)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* r15 = nullptr
int32_t _Count_1 = arg3
char* _Destination = arg2
int64_t* rdi = arg1
char* result

if (arg2 != 0)
    if (_Count_1 != 0)
        goto label_1428a2eb7
    
    result = nullptr
else
    int64_t* rax_2 = sub_1428a7510()
    r15 = rax_2
    int64_t rax_3
    
    if (rax_2 != 0)
        _Count_1 = 0xc8
        rax_3 = sub_1428a7260(rax_2, 0xc8)
    
    int32_t rax_34
    int32_t r8_6
    
    if (rax_2 == 0 || rax_3 == 0)
    label_1428a31be:
        rax_34 = 0xb1
        r8_6 = 0x41
    label_1428a31ee:
        sub_1428a5670(0xb, 0x74, r8_6, "crypto\x509\x509_obj.c", rax_34)
        sub_1428a71f0(r15)
        result = nullptr
    else
        *r15[1] = _Destination.b
    label_1428a2eb7:
        
        if (rdi != 0)
            int32_t r13_1 = 0
            int32_t rbx_1 = 0
            int32_t var_c8_1 = 0
            
            if (sub_142898c70(*rdi) s<= 0)
            label_1428a3166:
                
                if (r15 != 0)
                    _Destination = r15[1]
                    sub_1428a6780(r15)
            else
                while (true)
                    int64_t* rax_5 = sub_142898ea0(*rdi, rbx_1)
                    int32_t rax_6 = sub_1428a96d0(*rax_5)
                    void* rax_7
                    void* rbp_1
                    
                    if (rax_6 != 0)
                        rax_7 = sub_1428a9620(rax_6)
                        rbp_1 = rax_7
                    
                    if (rax_6 == 0 || rax_7 == 0)
                        void var_98
                        sub_1428cddd0(&var_98, 0x50, *rax_5)
                        rbp_1 = &var_98
                    
                    char* rdi_1 = -ffffffffffffffff
                    
                    do
                        rdi_1 = &rdi_1[1]
                    while (*(rdi_1 + rbp_1) != 0)
                    
                    int32_t* rax_8 = rax_5[1]
                    uint64_t i_6 = zx.q(*rax_8)
                    
                    if (i_6.d s> 0x100000)
                        rax_34 = 0x4a
                    else
                        char* r9_1 = *(rax_8 + 8)
                        int32_t rax_10
                        
                        if (rax_8[1] == 0x1b)
                            rax_10 = i_6.d & 0x80000003
                            
                            if (rax_10 s< 0)
                                rax_10 = ((rax_10 - 1) | 0xfffffffc) + 1
                        
                        int32_t var_a8
                        
                        if (rax_8[1] != 0x1b || rax_10 != 0)
                            int32_t var_9c_2 = 1
                        label_1428a3010:
                            var_a8 = 1
                            int32_t var_a4_2 = 1
                            int32_t var_a0_2 = 1
                        else
                            int32_t rcx_9 = 0
                            uint64_t rdx_2 = 0
                            int32_t var_a0_1 = 0
                            int32_t rax_13 = 0
                            int32_t var_a4_1 = 0
                            var_a8 = 0
                            
                            if (i_6.d s> 0)
                                char* rcx_10 = r9_1
                                uint64_t i_3 = i_6
                                uint64_t i
                                
                                do
                                    if (*rcx_10 != 0)
                                        (&var_a8)[zx.q(rdx_2.d) & 3] = 1
                                    
                                    rdx_2 += 1
                                    rcx_10 = &rcx_10[1]
                                    i = i_3
                                    i_3 -= 1
                                while (i != 1)
                                rcx_9 = var_a0_1
                                rdx_2 = zx.q(var_a4_1)
                                rax_13 = var_a8
                            
                            int32_t var_9c_1 = 1
                            
                            if ((rax_13 | rdx_2.d | rcx_9) != 0)
                                goto label_1428a3010
                            
                            var_a4_1.q = 0
                            var_a8 = 0
                        
                        int32_t rcx_11 = 0
                        
                        if (i_6.d s> 0)
                            int64_t rdx_3 = 0
                            uint64_t i_4 = i_6
                            uint64_t i_1
                            
                            do
                                if ((&var_a8)[zx.q(rdx_3.d) & 3] != 0)
                                    rcx_11 += 1
                                    
                                    if (*r9_1 - 0x20 u> 0x5e)
                                        rcx_11 += 3
                                
                                rdx_3 += 1
                                r9_1 = &r9_1[1]
                                i_1 = i_4
                                i_4 -= 1
                            while (i_1 != 1)
                        
                        int64_t rbx_2 = sx.q(r13_1)
                        r13_1 = r13_1 + 2 + rcx_11 + rdi_1.d
                        
                        if (r13_1 s> 0x100000)
                            rax_34 = 0x7b
                        else
                            void* rbx_3
                            
                            if (r15 == 0)
                                if (r13_1 s> _Count_1 - 1)
                                    break
                                
                                rbx_3 = &_Destination[rbx_2]
                            else
                                if (sub_1428a7260(r15, sx.q(r13_1 + 1)) == 0)
                                    goto label_1428a31be
                                
                                rbx_3 = rbx_2 + r15[1]
                            
                            *rbx_3 = 0x2f
                            memcpy(rbx_3 + 1, rbp_1, rdi_1.d)
                            void* rbx_5 = rbx_3 + 1 + sx.q(rdi_1.d)
                            *rbx_5 = 0x3d
                            void* rbx_6 = rbx_5 + 1
                            char* r8_4 = *(rax_5[1] + 8)
                            
                            if (i_6.d s> 0)
                                int64_t rdx_6 = 0
                                uint64_t i_5 = i_6
                                uint64_t i_2
                                
                                do
                                    if ((&var_a8)[zx.q(rdx_6.d) & 3] != 0)
                                        uint64_t rcx_14 = zx.q(*r8_4)
                                        
                                        if ((rcx_14 - 0x20).d u> 0x5e)
                                            *rbx_6 = 0x785c
                                            *(rbx_6 + 2) = (*"0123456789ABCDEF")[rcx_14 u>> 4]
                                            *(rbx_6 + 3) =
                                                *((zx.q(rcx_14.d) & 0xf) + "0123456789ABCDEF")
                                            rbx_6 += 4
                                        else
                                            *rbx_6 = rcx_14.b
                                            rbx_6 += 1
                                    
                                    rdx_6 += 1
                                    r8_4 = &r8_4[1]
                                    i_2 = i_5
                                    i_5 -= 1
                                while (i_2 != 1)
                                _Destination = arg2
                            
                            rdi = arg1
                            *rbx_6 = 0
                            rbx_1 = var_c8_1 + 1
                            var_c8_1 = rbx_1
                            
                            if (rbx_1 s>= sub_142898c70(*rdi))
                                goto label_1428a3166
                            
                            continue
                    
                    r8_6 = 0x86
                    goto label_1428a31ee
            
            if (var_c8_1 == 0)
                *_Destination = 0
        else
            if (r15 != 0)
                _Destination = r15[1]
                sub_1428a6780(r15)
            
            int64_t _Count = sx.q(_Count_1)
            strncpy(_Destination, "NO X509_NAME", _Count)
            _Destination[_Count - 1] = 0
        
        result = _Destination

__security_check_cookie(rax_1 ^ &var_f8)
return result
