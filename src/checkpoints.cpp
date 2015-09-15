// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2011-2012 Litecoin Developers
// Copyright (c) 2013 66 Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
typedef std::map<int, uint256> MapCheckpoints;

//
// What makes a good checkpoint block?
// + Is surrounded by blocks with reasonable timestamps
//   (no blocks before with a timestamp after, none after with
//    timestamp before)
// + Contains no strange transactions
//

// no checkpoint now, can be added in later releases
static MapCheckpoints mapCheckpoints = boost::assign::map_list_of
	(0, uint256("0xf2ab5b325627cd0df6a17f4e6ad87abf2c61d033c9bfd2f09144f43db5ff4dee"))
	(1500, uint256("0xe5596d7d29cf290c3f2417ed89b6d3c3cb2687f16421a821cf00de068f188e1e"))
	(3000, uint256("0x6bb04b4a21d0b8581162fdecfcccf3110761c61cbd22a8d665a43ab6c5af642f"))
	(4500, uint256("0xfb983fd5f2f218be41048af90ff35a60321b0743a8d1695c75fcf77f4a597ba1"))
	(6000, uint256("0x10e1032e3bf30b76ad6a15920649b557935dd5609b848a88f5edab8aa02b34c2"))
	(7500, uint256("0x71dd9af7e5339d59683b9eb0d198b8d0da9b4bae178d8729763eaaf7836b72d2"))
	(9000, uint256("0xb79fa05487fb7c01a854234fb3439158a2da971cdb2fd6ecc1b34335fd1e8c61"))
	(10500, uint256("0xcfe62e5d5a9af9e566930b098a663257fa1dbe09c93b0a52cb99dcba764d65d9"))
	(12000, uint256("0x8953463a993de316807a7ebf443daa2311969408aaa557f2a700a6dd83a9066a"))
	(13500, uint256("0x8c30d9db3caf44e068882301e8a4b9502ee2e91ec1277f44694605c2b50d7b00"))
	(15000, uint256("0x0c8ad1e221e36d5f1c4ac1f4c7ce4e490b456c13c61fa076e2a79590168601f5"))
	(16500, uint256("0x2bfd5a0996b13e7a64e6adfd0c2ee38ee1a7a1d27d3cdfcede90a26d1fed6cf3"))
	(18000, uint256("0x67375ba02879483f4d26a11db1a427ad6b769d31a26734f166cd7c14870004c0"))
	(19500, uint256("0x8438dd97e7d021af4647438dd544f558b2fc02c359b580166864c783f38fabe4"))
	(21000, uint256("0x7dbc0b0c72fdab233680362af750d5780cdc92576f87e6d32117f133fd78ebf1"))
	(22500, uint256("0xd7b4b80217644d20fd9f59e2402f88f1924e3e3c8315e7f250d38abcccf1045e"))
	(24000, uint256("0xf80fb69a284ae1abb297f44cf38eff0cac22bf245b1ab556726c6b5bace90ce1"))
	(25500, uint256("0xb00e65039c7ba00c723388199e1767d36237d4636f173c7451fb81dec8eedce0"))
	(27000, uint256("0xe4c70b295508f426d59a0ea14fb270e0f0c288b943a6a3e736b0b6e5ab5b72b5"))
	(28500, uint256("0x98175d4e1a26d445b659a29c511de3f64dbc5e6d789c0b92c6fb91da5df98a70"))
	(30000, uint256("0x85693143969d0d7ca0d852ba0c524a966171e11a579c59376645187e8f894aa0"))
	(31500, uint256("0x140b963ca249c5517b882698592544528849912d83ac2750ae852adbb871dbc3"))
	(33000, uint256("0x0ed116e54cfe096c4ae6a9ae7e27b957f14dbd98e0ec77a6f3bf97df28fa5add"))
	(34500, uint256("0x01985ba22b266a24dfc1b046a0de457cb98c50811f388a4004e6588d4ceff047"))
	(36000, uint256("0x3a1857ae5b7de649c5d7c65237266a11e6eb4df203729c5111083a9a83b56ca7"))
	(37500, uint256("0xbc4475eef765ef71e867ffbb40fb390d34ba6ead8c791046a219ddeea019d24f"))
	(39000, uint256("0xf731cc86ffcde2d777b3f66550fe07944862d8fd8062d9a5e769ad87cd06e3ad"))
	(40500, uint256("0x7bc5965e8a8a2ed169a986628ca7df38fbabdf0cfda31cc1d7c239190c1be677"))
	(42000, uint256("0xbc478ff2e3f262ee974492f5ccbdefd96a6ae69e55c033805114483b96527efb"))
	(43500, uint256("0xa874c4dee7f16674135bdf15a7c26bfd5cd2926ec32f495886071b1ff4e9475e"))
	(45000, uint256("0x9013378eaa132be75e450504600c8a2dab7fe6e423bc4ab240f70b095f731081"))
	(46500, uint256("0x8aedbbb66842d39a47a554578f06a1ffbb194349e8fea9a5b58cbcd0e2368f76"))
	(48000, uint256("0xe00420eee4701c2c17532ddea0780c959fb91f9dc898b808846630d62ff41b84"))
	(49500, uint256("0x53dfa4f4debbae5b6145b2eacd04b117025e4cd159ed1185f58bbf6ce5d97ce8"))
	(51000, uint256("0x5ca5f69fe703385db8afa6bf7de7fd2246eb34e3e820fe42a9155e74d2140a5f"))
	(52500, uint256("0x31256ac6a6038e6b3a91f604c91d34d1a3272219167d012c4d7fcbc987419fcb"))
	(54000, uint256("0x89c1668e559bdf47e9788445d02b3c5b7109fc5c8c072b7b78b504355f430c67"))
	(55500, uint256("0xa6213b9425b6f8894604d098688565b9cdb7150d11a67e4cc5982719d30afbfb"))
	(57000, uint256("0x5bd8d686f80d50020ebdae492a1cef5d3d72cc55e3c2571197f0b5a8d312c810"))
	(58500, uint256("0x869fda4058e000a5f0ad918d8b83d66a972f82f3e025c72f3713393be7189316"))
	(60000, uint256("0x294c938597fd624a3f541573633eea939e48df165c8d4cd188081b70ef0fb969"))
	(61500, uint256("0xe9b3139716fff15c9e770dee502aefe3ea7a5d358ecfbbade11820d89e421ee3"))
	(63000, uint256("0xecef7f04b697d14b00477c623c012497d6150f3bc255dd5427823f77791887b4"))
	(66000, uint256("0x883396483fe44fb0cb333cd69f3d04e812d4e1a4bfcf5fff994de4c8c2951942"))
	(64500, uint256("0x45459bf98e4890edde13bd1967163b2f192f38444d2878c2eb12a971f90b89ec"))
	(67500, uint256("0x43d281364d3cb9dc6847367ef8773c91bdb7a088b902223c8e9ea759e10bf12f"))
	(69000, uint256("0xac13d552ef4a196153bfd32e008c9c3dd821e7b9c1396fe30c6efca84cbe918b"))
	(70500, uint256("0x2a240efc3d817d08a8c56d6a41944cdb5103366d0b43a9f62cc8818715e44d70"))
	(72000, uint256("0x7ccb98c263bc8e2b65429035fb4985b1a2b810ca291bcc3ea20f2c07ec6a920a"))
	(73500, uint256("0x6971c13fb99a4b845c5c6e49b5727e4304f9fb34b9ac1c7f4552ff5d3faffcdc"))
	(75000, uint256("0x93766402ffe40b34847b4f87e78473eb510ca7fd2f9afb19b8324eb09993f04c"))
	(76500, uint256("0x0bd504846c414a91b63594c3e9db6a298b0dcb5015c644b0dc47dee4afca39e5"))
	(78000, uint256("0x7eca7fccdb2338c33ec91095cb364080491bef94bb464d133fbf964a33be814f"))
	(79500, uint256("0x6582a2f79f7d7746d6a90f75ea38fc0ddc39d7d77bc801d00d03e43cbd7aee45"))
	(80076, uint256("0xe47fed043e13d86b2f03ffb32c8b575076d27e73bee08f5d60d6268b25546aba"))
	(479863, uint256("0x43b6c384b2c8644425ee8371a8b8dff5496b5f9f9f29175590f98dd8125c6d79"))
	(480181, uint256("0x7fb94a2821317c5e7e580122f617502055f575daccc962b04a6bbac0679ed3e9"))
	(480710, uint256("0x734de3cf030ebcd2d3b47fc037944de4309d6ce44b37b76a6e9d967d3415f3f6"))
	(480719, uint256("0xbbfc48c3ce707460092307dfa7e6546a22941bf670430b1b7f486968242e6266"))
	(511187, uint256("0xe16bd77d19a274bdde7fc756ffba24b3db3d46906f4c317ea663ebf3d2f3c128"))
	(511754, uint256("0x4acd78382921839b605f7970ab0396bf5affe19ed722b1913c41989420b13048"))
	(512059, uint256("0xe8915f3c440c15c8e2a6aeff707e49c1434d1dfc2d654e56bf6e55382b13037b"))
	(580364, uint256("0xe704db52791619ba6ca87bea5c71f020f90c7252eb70e495d72da8af355576de"));
	
bool CheckBlock(int nHeight, const uint256 &hash)
{
	if (fTestNet)
		return true; // Testnet has no checkpoints

// 	if( nHeight % 1500 == 0 )
// 		printf("Checkpoint (%d, uint256(\"0x%s\"))\n", nHeight, hash.GetHex().c_str());
	MapCheckpoints::const_iterator i = mapCheckpoints.find(nHeight);
	if (i == mapCheckpoints.end())
		return true;
	return hash == i->second;
	// return true;
}

int GetTotalBlocksEstimate()
{
	if (fTestNet)
		return 0;

	return mapCheckpoints.rbegin()->first;
	// return 0;
}

CBlockIndex *GetLastCheckpoint(const std::map<uint256, CBlockIndex *> &mapBlockIndex)
{
	if (fTestNet)
		return NULL;

	BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type & i, mapCheckpoints)
	{
		const uint256 &hash = i.second;
		std::map<uint256, CBlockIndex *>::const_iterator t = mapBlockIndex.find(hash);
		if (t != mapBlockIndex.end())
			return t->second;
		// return NULL;
	}
	return NULL;
}
}
