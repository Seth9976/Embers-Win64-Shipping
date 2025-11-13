// 函数: sub_1403c0460
// 地址: 0x1403c0460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_68[0x4] = arg6
uint128_t var_88 = arg4
uint128_t var_98 = arg3
uint64_t r14 = arg1
uint64_t result
uint128_t zmm0
uint128_t zmm1

if (arg2 s> 8)
    int32_t rax
    
    if ((*(r14 + 0x25e) & 2) != 0)
        rax.b = *(r14 + 0x2d8)
        arg1.b = *(r14 + 0x2d9)
        
        if (arg1.b u<= rax.b)
            arg1 = zx.q(rax)
        
        rax.b = *(r14 + 0x2da)
        
        if (rax.b u<= arg1.b)
            rax = arg1.d
    else
        rax.b = *(r14 + 0x2db)
    
    int32_t rcx
    
    if ((rax - 1).b u< 0xf)
        rcx.b = 0x10
        rcx.b = 0x10 - rax.b
    else
        rcx = 0
    
    uint64_t rbp
    rbp.b = 5
    
    if (rcx.b u>= 5)
        rbp = zx.q(rcx)
    
    int32_t rdx = *(r14 + 0x15c)
    int32_t rax_2 = *(r14 + 0x2a0)
    
    if ((rdx & 0x400) == 0)
        rbp = zx.q(rcx)
    
    if (rbp.b u>= 8)
        rbp.b = 8
    
    uint32_t r13_1 = zx.d(rbp.b)
    *(r14 + 0x298) = r13_1
    
    if ((rdx & 0x480) == 0)
        int32_t r9_1
        
        if (rax_2 s<= 0)
            r9_1 = 0x186a0
        else
            zmm1.q = float.d(*(r14 + 0x29c))
            zmm0.q = 0x430c6bf526340000 f/ zmm1.q
            zmm0.q = zmm0.q f/ float.d(rax_2)
            zmm0.q = zmm0.q f+ 0.5
            double zmm0_4 = floor(zmm0.q)
            r9_1 = int.d(zmm0_4)
            
            if (zmm0_4 < -2147483648.0)
                r9_1 = 0
            
            if (0x41dfffffffc00000 f< zmm0_4)
                r9_1 = 0
        
        result, arg6 = sub_1403c0ed0(r14, r14 + 0x2c0, r13_1, r9_1, arg6)
        
        if ((*(r14 + 0x15c) & 0x600080) != 0)
        label_1403c0db3:
            zmm1.q = float.d(*(r14 + 0x29c))
            double zmm0_9 = floor(0x4202a05f20000000 f/ zmm1.q + 0.5)
            int32_t r9_2 = int.d(zmm0_9)
            
            if (zmm0_9 < -2147483648.0)
                r9_2 = 0
            
            if (0x41dfffffffc00000 f< zmm0_9)
                r9_2 = 0
            
            double zmm6
            int64_t zmm7
            int512_t zmm8
            int512_t zmm10
            zmm6, zmm7, zmm8, zmm10 = sub_1403c0ed0(r14, r14 + 0x2d0, r13_1, r9_2, arg6)
            int32_t rax_33 = *(r14 + 0x2a0)
            int32_t r9_3
            
            if (rax_33 s<= 0)
                r9_3 = *(r14 + 0x29c)
            else
                double zmm0_11 = floor(zmm6 f/ float.d(rax_33) + 0.5)
                r9_3 = int.d(zmm0_11)
                
                if (zmm0_11 < -2147483648.0)
                    r9_3 = 0
                
                if (zmm7 f< zmm0_11)
                    r9_3 = 0
            
            zmm8.o = arg5
            zmm10.o = arg7
            return sub_1403c0ed0(r14, r14 + 0x2c8, r13_1, r9_3, var_68) __tailcall
    else
        if (rax_2 s<= 0)
            arg3 = 0x3ff0000000000000
        else
            zmm1.q = float.d(*(r14 + 0x29c))
            arg4 = 0x3ee4f8b588e368f1
            zmm0.q = float.d(rax_2)
            zmm1.q = zmm1.q f* arg4.q
            zmm0.q = zmm0.q f* zmm1.q
            zmm0.q = zmm0.q f+ 0.5
            uint128_t zmm0_1 = floor(zmm0.q)
            arg3 = zmm0_1
            zmm0_1.q = float.d(int.d(zmm0_1.q))
            zmm0_1.q = zmm0_1.q f* arg4.q
            zmm1 = _mm_and_pd(_mm_cmpeq_sd(-0x3e20000000000000, arg3.q, 2), zmm0_1)
            arg3 = _mm_and_pd(__cmpsd_xmm_xmmsd_memsd_immb(arg3.q, 0x41dfffffffc00000, 2), zmm1)
        
        char r12_1 = 8 - r13_1.b
        uint64_t rdi_3 = zx.q(1 << r12_1)
        int64_t rax_13 = png_calloc(r14, rdi_3 << 3)
        *(r14 + 0x2c0) = rax_13
        int64_t rbx_1 = 0
        
        do
            *(rax_13 + (rbx_1 << 3)) = png_malloc(r14, 0x200)
            rbx_1 += 1
        while (rbx_1 u< rdi_3)
        
        uint32_t rsi_5 = 0xff u>> rbp.b
        int32_t i = 0
        arg4 = 0x40efffe000000000
        int32_t rbp_1 = 0
        
        do
            int16_t rbx_4 = (i << 8).w + i.w
            uint32_t rcx_8 = zx.d(rbx_4)
            int32_t rax_16 = rcx_8 + 0x80
            
            if (rcx_8 u<= 0xff7e)
                rax_16 = int.d(floor(pow(float.d(rax_16) f/ arg4.q, arg3.q) f* arg4.q
                    f+ 0x3fe0000000000000))
            
            result =
                zx.q((zx.d(rax_16.w) * not.d(0xffffffff << (0x10 - r13_1.b)) + 0x8000) u/ 0xffff)
            
            if (rbp_1 u<= result.d)
                int32_t rdx_2 = rbp_1
                bool cond:7_1
                
                do
                    *(*(rax_13 + ((zx.q(rdx_2) & zx.q(rsi_5)) << 3))
                        + (zx.q(rdx_2 u>> r12_1) << 1)) = rbx_4
                    rbp_1 = rdx_2 + 1
                    cond:7_1 = rdx_2 u< result.d
                    rdx_2 = rbp_1
                while (cond:7_1)
            
            i += 1
        while (i != 0xff)
        
        int32_t rdi_7 = rdi_3.d << 8
        
        if (rdi_7 u> rbp_1)
            int32_t r8_3 = not.d(rbp_1) + rdi_7
            int32_t rdx_5 = neg.d(rbp_1) & 3
            
            if (rdx_5 != 0)
                int32_t i_5 = neg.d(rdx_5)
                int32_t i_1
                
                do
                    result = zx.q(rbp_1 u>> r12_1)
                    *(*(rax_13 + ((zx.q(rbp_1) & zx.q(rsi_5)) << 3)) + (result << 1)) = 0xffff
                    rbp_1 += 1
                    i_1 = i_5
                    i_5 += 1
                while (i_1 != 0xffffffff)
            
            if (r8_3 u>= 3)
                do
                    *(*(rax_13 + ((zx.q(rbp_1) & zx.q(rsi_5)) << 3))
                        + (zx.q(rbp_1 u>> r12_1) << 1)) = 0xffff
                    *(*(rax_13 + ((zx.q(rbp_1 + 1) & zx.q(rsi_5)) << 3))
                        + (zx.q((rbp_1 + 1) u>> r12_1) << 1)) = 0xffff
                    *(*(rax_13 + ((zx.q(rbp_1 + 2) & zx.q(rsi_5)) << 3))
                        + (zx.q((rbp_1 + 2) u>> r12_1) << 1)) = 0xffff
                    result = zx.q((rbp_1 + 3) u>> r12_1)
                    *(*(rax_13 + ((zx.q(rbp_1 + 3) & zx.q(rsi_5)) << 3)) + (result << 1)) = 0xffff
                    rbp_1 += 4
                while (rbp_1 != rdi_7)
        
        if ((*(r14 + 0x15c) & 0x600080) != 0)
            goto label_1403c0db3
else
    int32_t rax_1 = *(r14 + 0x2a0)
    int32_t rsi_1
    
    if (rax_1 s<= 0)
        rsi_1 = 0x186a0
    else
        zmm1.q = float.d(*(r14 + 0x29c))
        zmm0.q = 0x430c6bf526340000 f/ zmm1.q
        zmm0.q = zmm0.q f/ float.d(rax_1)
        zmm0.q = zmm0.q f+ 0.5
        zmm0 = floor(zmm0.q)
        rsi_1 = int.d(zmm0.q)
        
        if (zmm0.q f< -2147483648.0)
            rsi_1 = 0
        
        if (0x41dfffffffc00000 f< zmm0.q)
            rsi_1 = 0
    
    char* rax_4 = png_malloc(r14, 0x100)
    *(r14 + 0x2a8) = rax_4
    result = zx.q(rsi_1 - 0x17318)
    
    if (result.d u> 0x2710)
        arg3.q = float.d(rsi_1)
        arg3.q = arg3.q f* 1.0000000000000001e-05
        int64_t i_2 = 0
        arg4 = 0x406fe00000000000
        
        do
            if ((i_2 - 1).d u> 0xfd)
                result = zx.q(i_2.d)
            else
                zmm0.q = float.d(zx.q(i_2.d))
                zmm0.q = zmm0.q f/ arg4.q
                result = zx.q(int.d(floor(pow(zmm0.q, arg3.q) f* arg4.q f+ 0x3fe0000000000000).q))
            
            rax_4[i_2] = result.b
            i_2 += 1
        while (i_2 != 0x100)
        
        if ((*(r14 + 0x15c) & 0x600080) != 0)
            goto label_1403c0786
    else
        __builtin_memcpy(rax_4, 
            "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x14\x15\x"
        "16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f", 
            0x20)
        __builtin_strncpy(&rax_4[0x20], 
            " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\"
        "]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f", 
            0x60)
        __builtin_memcpy(&rax_4[0x80], 
            "\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x94\x95\x"
        "96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8\xa9\xaa\xab\xac"
        "ad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd\xbe\xbf\xc0\xc1\xc2\xc3"
        "c4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2\xd3\xd4\xd5\xd6\xd7\xd8\xd9\xda"
        "db\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7\xe8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1"
        "f2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc\xfd\xfe\xff", 
            0x80)
        
        if ((*(r14 + 0x15c) & 0x600080) != 0)
        label_1403c0786:
            zmm1.q = float.d(*(r14 + 0x29c))
            arg6 = 0x4202a05f20000000
            zmm0.q = arg6.q f/ zmm1.q
            zmm0.q = zmm0.q f+ 0.5
            float zmm0_3[0x4] = floor(zmm0.q)
            int32_t rsi_2 = int.d(zmm0_3[0].q)
            
            if (zmm0_3[0].q f< -2147483648.0)
                rsi_2 = 0
            
            arg5 = 0x41dfffffffc00000
            
            if (arg5.q f< zmm0_3[0].q)
                rsi_2 = 0
            
            char* rax_7 = png_malloc(r14, 0x100)
            *(r14 + 0x2b8) = rax_7
            
            if (rsi_2 - 0x17318 u> 0x2710)
                arg4.q = float.d(rsi_2)
                arg4.q = arg4.q f* 1.0000000000000001e-05
                int64_t i_3 = 0
                arg3 = 0x406fe00000000000
                
                do
                    char rax_11
                    
                    if ((i_3 - 1).d u> 0xfd)
                        rax_11 = i_3.b
                    else
                        zmm0_3 = zx.o(0)
                        zmm0_3[0].q = float.d(zx.q(i_3.d))
                        zmm0_3[0].q = zmm0_3[0].q f/ arg3.q
                        rax_11 = (int.d(floor(pow(zmm0_3[0].q, arg4.q) f* arg3.q
                            f+ 0x3fe0000000000000)[0].q)).b
                    
                    rax_7[i_3] = rax_11
                    i_3 += 1
                while (i_3 != 0x100)
            else
                __builtin_memcpy(rax_7, 
                    "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x"
                "14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f", 
                    0x20)
                __builtin_strncpy(&rax_7[0x20], 
                    " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\"
                "]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f", 
                    0x60)
                __builtin_memcpy(&rax_7[0x80], 
                    "\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x"
                "94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8"
                "a9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd"
                "be\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2"
                "d3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7"
                "e8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc"
                "fd\xfe\xff", 
                    0x80)
            
            int32_t rax_12 = *(r14 + 0x2a0)
            int32_t rsi_3
            
            if (rax_12 s<= 0)
                rsi_3 = *(r14 + 0x29c)
            else
                zmm0_3 = zx.o(0)
                zmm0_3[0].q = float.d(rax_12)
                arg6[0].q = arg6[0].q f/ zmm0_3[0].q
                arg6[0].q = arg6[0].q f+ 0.5
                zmm0_3 = floor(arg6[0].q)
                rsi_3 = int.d(zmm0_3[0].q)
                
                if (zmm0_3[0].q f< -2147483648.0)
                    rsi_3 = 0
                
                if (arg5.q f< zmm0_3[0].q)
                    rsi_3 = 0
            
            char* rax_30 = png_malloc(r14, 0x100)
            *(r14 + 0x2b0) = rax_30
            result = zx.q(rsi_3 - 0x17318)
            
            if (result.d u> 0x2710)
                arg3.q = float.d(rsi_3)
                arg3.q = arg3.q f* 1.0000000000000001e-05
                int64_t i_4 = 0
                arg4 = 0x406fe00000000000
                
                do
                    if ((i_4 - 1).d u> 0xfd)
                        result = zx.q(i_4.d)
                    else
                        zmm0_3 = zx.o(0)
                        zmm0_3[0].q = float.d(zx.q(i_4.d))
                        zmm0_3[0].q = zmm0_3[0].q f/ arg4.q
                        result = zx.q(int.d(floor(pow(zmm0_3[0].q, arg3.q) f* arg4.q
                            f+ 0x3fe0000000000000)[0].q))
                    
                    rax_30[i_4] = result.b
                    i_4 += 1
                while (i_4 != 0x100)
            else
                __builtin_memcpy(rax_30, 
                    "\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x"
                "14\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f", 
                    0x20)
                __builtin_strncpy(&rax_30[0x20], 
                    " !\"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\"
                "]^_`abcdefghijklmnopqrstuvwxyz{|}~\x7f", 
                    0x60)
                __builtin_memcpy(&rax_30[0x80], 
                    "\x80\x81\x82\x83\x84\x85\x86\x87\x88\x89\x8a\x8b\x8c\x8d\x8e\x8f\x90\x91\x92\x93\x"
                "94\x95\x96\x97\x98\x99\x9a\x9b\x9c\x9d\x9e\x9f\xa0\xa1\xa2\xa3\xa4\xa5\xa6\xa7\xa8"
                "a9\xaa\xab\xac\xad\xae\xaf\xb0\xb1\xb2\xb3\xb4\xb5\xb6\xb7\xb8\xb9\xba\xbb\xbc\xbd"
                "be\xbf\xc0\xc1\xc2\xc3\xc4\xc5\xc6\xc7\xc8\xc9\xca\xcb\xcc\xcd\xce\xcf\xd0\xd1\xd2"
                "d3\xd4\xd5\xd6\xd7\xd8\xd9\xda\xdb\xdc\xdd\xde\xdf\xe0\xe1\xe2\xe3\xe4\xe5\xe6\xe7"
                "e8\xe9\xea\xeb\xec\xed\xee\xef\xf0\xf1\xf2\xf3\xf4\xf5\xf6\xf7\xf8\xf9\xfa\xfb\xfc"
                "fd\xfe\xff", 
                    0x80)
return result
