// 函数: sub_1428e15a0
// 地址: 0x1428e15a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (data_143b85e30 s>= 0)
label_1428e17e7:
    void* rax_12 = sub_1428a6a70(0x60)
    
    if (rax_12 != 0)
        int32_t rdx_9 = data_143b85e30
        *(rax_12 + 0x48) = sub_140592360
        *(rax_12 + 0x20) = 1
        *(rax_12 + 0x40) = 3
        *(rax_12 + 0x10) = 1
        *(rax_12 + 0x38) = 0x1c000
        *(rax_12 + 0x3c) = 1
        sub_1428e3150(arg1, rdx_9, rax_12)
        uint64_t phProv
        
        if (
                CryptAcquireContextW(&phProv, nullptr, 
                    Microsoft Enhanced RSA and AES Cryptographic Provider", 
                0x18, 0xf0000000) != 0)
            uint64_t hProv = phProv
            data_143feccc0 = 1
            CryptReleaseContext(hProv, 0)
        
        return 1
    
    int32_t rax_13 = data_143fecca8
    
    if (rax_13 == 0)
        rax_13 = sub_1428a5060()
        data_143fecca8 = rax_13
    
    sub_1428a5670(rax_13, 0x65, 0x41, "engines\e_capi.c", 0x644)
else
    int32_t rax_1 = sub_1428a6180(0xa, 0, 0, 0, 0, 0)
    data_143b85e30 = rax_1
    
    if (rax_1 s>= 0)
        data_143b85e3c = sub_1428a6180(3, 0, 0, 0, 0, 0)
        data_143b85e34 = sub_1428a6180(9, 0, 0, 0, 0, 0)
        int64_t rax_4 = sub_14060aa50(&data_143b85960)
        sub_1429270d0(data_143feccb0, rax_4)
        int64_t rax_5 = sub_14060aa60(&data_143b85960)
        sub_142891680(data_143feccb0, rax_5)
        sub_1428916b0(data_143feccb0, sub_1428e27e0)
        sub_142891660(data_143feccb0, sub_1428e2540)
        int64_t rax_6 = sub_142896660(&data_143b85960)
        sub_142926eb0(data_143feccb0, rax_6)
        int64_t rax_7 = sub_1428a38f0(&data_143b85960)
        sub_1428dd2b0(data_143feccb0, rax_7)
        Mod1::SetPvClient(data_143feccb0, sub_1428e24b0)
        sub_1428e3140(data_143feccb0, sub_1428e2830)
        data_143b85e38 = sub_1428a6180(7, 0, 0, 0, 0, 0)
        sub_1429270d0(data_143feccb8, sub_1428dff90)
        int64_t rax_9 = sub_142891590(&data_143b861f0)
        sub_1428916b0(data_143feccb8, rax_9)
        sub_1428ce2e0(data_143feccb8, sub_1428e02f0)
        int64_t rax_10 = sub_1427ec4a0(&data_143b861f0)
        sub_142891660(data_143feccb8, rax_10)
        int64_t rax_11 = sub_142896660(&data_143b861f0)
        sub_142926eb0(data_143feccb8, rax_11)
        goto label_1428e17e7

int32_t rax_14 = data_143fecca8

if (rax_14 == 0)
    rax_14 = sub_1428a5060()
    data_143fecca8 = rax_14

sub_1428a5670(rax_14, 0x6a, 0x41, "engines\e_capi.c", 0x1e9)
return 0
