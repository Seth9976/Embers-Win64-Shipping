// 函数: sub_141804c00
// 地址: 0x141804c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
void* result = __security_cookie ^ &var_3b8
void* result_1 = result
int64_t rsi = 0
int32_t var_384 = 0
int32_t r14 = 0

if (data_143ef9d08 == 0)
    int64_t var_380
    int64_t rbx_1 = *sub_140b58170(&var_380, "SSL", 1)
    j_sub_140b3db50()
    void* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t* rcx_2 = *(rax_2 + 0x18)
    int64_t rdx_2 = *rcx_2
    char rax_3 = (*(rdx_2 + 8))(rcx_2, rdx_2)
    int32_t rcx_3 = 3
    data_143ef9cf0 = 1
    
    if (rax_3 != 0)
        rcx_3 = 2
    
    int32_t rax_4 = sub_142c52240(rcx_3, j_sub_140a82f30, j_sub_140a74f90, sub_140dc0f10, 
        sub_141800ad0, sub_141800a80)
    
    if (rax_4 != 0)
        sub_140af98a0("Unknown", 0xcf, 
            Could not initialize libcurl (result=%d), HTTP transfers will not function properly.", 
            zx.q(rax_4))
        sub_140afbb40()
    else
        sub_142c529b0()
        int64_t rax_5
        int64_t r9_1
        rax_5, r9_1 = sub_142c535a0()
        data_143ef9d08 = rax_5
        
        if (rax_5 == 0)
            sub_140af98a0("Unknown", 0xb3, 
                Could not initialize create libcurl multi handle! HTTP transfers will not function "
            "properly.", r9_1)
            sub_140afbb40()
        
        void* rcx_5 = data_143ddb400
        int32_t var_370 = 0
        char rax_6
        int512_t zmm2_1
        rax_6, zmm2_1 = sub_140af3c10(rcx_5, HTTP.Curl", MaxTotalConnections"
            , &var_370, &data_143de5780)
        
        if (rax_6 != 0)
            uint64_t r8_1 = zx.q(var_370)
            
            if (r8_1.d s> 0)
                sub_142c538b0(data_143ef9d08, 0xd, r8_1)
        
        int32_t* rax_7
        int64_t r9_3
        rax_7, r9_3 = sub_142c526a0()
        data_143ef9d00 = rax_7
        
        if (rax_7 == 0)
            sub_140af98a0("Unknown", 0xca, u"Could not initialize libcurl share handle!", r9_3)
            sub_140afbb40()
        else
            int512_t zmm2_2 = sub_142c526f0(rax_7, 1, 2, zmm2_1)
            int512_t zmm2_3 = sub_142c526f0(data_143ef9d00, 1, 3, zmm2_2)
            sub_142c526f0(data_143ef9d00, 1, 4, zmm2_3)
    
    sub_140af2b60()
    char rax_8 = sub_140b21a10(&data_143dbb3f0, u"noreuseconn")
    char rcx_10 = data_1439c6611
    
    if (rax_8 != 0)
        rcx_10 = 1
    
    data_1439c6611 = rcx_10
    int64_t* rcx_11 = *(rax_2 + 0x10)
    char rax_10 = (*(*rcx_11 + 0x10))(rcx_11)
    void* rcx_12 = data_143ddb400
    data_1439c6610 = rax_10
    char var_388 = 1
    char rax_11 = sub_140af2fd0(rcx_12, /Script/Engine.NetworkSettings", n.VerifyPeer"
        , &var_388, &data_143de5780)
    char rdx_3 = data_1439c6610
    char rcx_13 = var_388
    char var_387 = 1
    int16_t** var_398_4 = &data_143de5780
    
    if (rax_11 != 0)
        rdx_3 = rcx_13
    
    void* rcx_14 = data_143ddb400
    data_1439c6610 = rdx_3
    char rax_12 = sub_140af2fd0(rcx_14, u"HTTP", u"AcceptCompressedContent", &var_387, var_398_4)
    char rdx_4 = data_1439c6612
    char rcx_15 = var_387
    var_384 = 0
    int16_t** var_398_5 = &data_143de5780
    
    if (rax_12 != 0)
        rdx_4 = rcx_15
    
    void* rcx_16 = data_143ddb400
    data_1439c6612 = rdx_4
    
    if (sub_140af3c10(rcx_16, u"HTTP.Curl", u"BufferSize", &var_384, var_398_5) != 0)
        int32_t rax_14 = var_384
        int32_t rcx_17 = data_1439c6628
        
        if (rax_14 s> 0)
            rcx_17 = rax_14
        
        data_1439c6628 = rcx_17
    
    sub_140af2fd0(data_143ddb400, HTTP.Curl", bAllowSeekFunction", &data_1439c662c, &data_143de5780)
    void* rax_15 = data_143ef9cf8
    
    if (rax_15 == 0)
        int64_t rbx_3 = *sub_140b58170(&var_380, "HTTP", 1)
        j_sub_140b3db50()
        j_sub_140b407e0(&data_143de7d78, rbx_3)
        rax_15 = data_143ef9cf8
    
    uint64_t r8_2 = zx.q(*(rax_15 + 0x3c))
    int64_t rbx_4 = -1
    data_1439c6614 = r8_2.d
    
    if (r8_2.d s<= 0)
        data_1439c6614 = 0
    else
        int32_t rax_17 = sub_142c538b0(data_143ef9d08, 7, r8_2)
        
        if (rax_17 != 0)
            char* rax_18 = sub_142c55d10(rax_17)
            int64_t rcx_22 = 0
            int64_t var_248_1 = 0
            
            if (rax_18 == 0)
                int64_t var_240_1 = 0
                int32_t var_238_1 = 0
            else
                int64_t r8_3 = -1
                
                do
                    r8_3 += 1
                while (rax_18[r8_3] != 0)
                
                void var_348
                sub_141804ad0(&var_348, rax_18, r8_3.d, 1)
                rcx_22 = var_248_1
            
            data_1439c6614 = 0
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
    
    wchar16 var_228[0x100]
    memset(&var_228, 0, 0x200)
    sub_140af2b60()
    int64_t* var_398_6
    var_398_6.b = 1
    result = sub_140b2b020(&data_143dbb3f0, u"MULTIHOMEHTTP=", &var_228, 0x100, var_398_6.b)
    
    if (result.b != 0)
        result = sub_140fc6160(sub_140b58260(&var_380, u"WINDOWS", 1))
        int64_t var_368
        void* r15_1
        
        if (result == 0)
            r15_1.b = 0
        else
            int32_t rdx_7 = 0
            int32_t rcx_27 = 0
            int32_t var_360_1 = 0
            int32_t var_35c_1 = 0
            var_368 = 0
            
            if (var_228[0] != 0)
                int64_t rdi_1 = -1
                
                do
                    rdi_1 += 1
                while (var_228[rdi_1] != 0)
                
                if (rdi_1.d + 1 s> 0)
                    sub_1405947f0(&var_368, rdi_1.d + 1)
                    rcx_27 = var_35c_1
                    rdx_7 = var_360_1
                
                int32_t rax_20 = rdx_7 + rdi_1.d + 1
                int32_t var_360_2 = rax_20
                
                if (rax_20 s> rcx_27)
                    sub_140594770(&var_368)
                
                UnDecorator::getReferenceType(var_368, &var_228, (rdi_1.d + 1) * 2)
            
            void var_358
            result = (*(*result + 0x58))(result, &var_358, &var_368)
            r14 = 3
            
            if (*result == 0)
                r15_1.b = 0
            else
                r15_1 = 1
        
        if ((r14.b & 2) != 0)
            r14 &= 0xfffffffd
            int64_t* var_350
            
            if (var_350 != 0)
                var_350[1].d -= 1
                
                if (var_350[1].d == 1)
                    result = (**var_350)(var_350)
                    int32_t temp1_1 = *(var_350 + 0xc)
                    *(var_350 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        result = (*(*var_350 + 8))(var_350, 1)
        
        if ((1 & r14.b) != 0)
            int64_t rcx_34 = var_368
            
            if (rcx_34 != 0)
                result = sub_140a74f90(rcx_34)
        
        if (r15_1.b != 0)
            int32_t rdi_4 = 0
            var_380 = 0
            int32_t r14_1 = 0
            int64_t var_378_1 = 0
            
            if (var_228[0] != 0)
                do
                    rbx_4 += 1
                while (var_228[rbx_4] != 0)
                
                if (rbx_4.d + 1 s> 0)
                    sub_1405947f0(&var_380, rbx_4.d + 1)
                    r14_1 = var_378_1:4.d
                    rdi_4 = var_378_1.d
                    rsi = var_380
                
                rdi_4 += rbx_4.d + 1
                var_378_1.d = rdi_4
                
                if (rdi_4 s> r14_1)
                    sub_140594770(&var_380)
                    r14_1 = var_378_1:4.d
                    rdi_4 = var_378_1.d
                    rsi = var_380
                
                result = UnDecorator::getReferenceType(rsi, &var_228, (rbx_4.d + 1) * 2)
            
            int64_t rcx_38 = data_1439c6618
            
            if (rcx_38 != 0)
                result = sub_140a74f90(rcx_38)
            
            data_1439c6618 = rsi
            data_1439c6620 = rdi_4
            data_1439c6624 = r14_1
    
    if (data_143ef9cf8 == 0)
        int64_t rbx_6 = *sub_140b58170(&var_380, "HTTP", 1)
        j_sub_140b3db50()
        result = j_sub_140b407e0(&data_143de7d78, rbx_6)

__security_check_cookie(result_1 ^ &var_3b8)
return result
